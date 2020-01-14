#!/usr/bin/python3

import sys
import wave
import struct


bitdist = 430.8 # transmission period, should be 416.7 (=2400 baud)
# but the actual recordings are closer to this value.

peak_th = 0.3 # threshold for triggering the '0' symbol

# generator which given wave.Wave_read object yields the raw bytes
# these need to be split into packets and parsed
def bytestream(waveread):
	try:
		print(waveread.getparams())
		fcnt = waveread.getnframes()
		srate = waveread.getframerate()

		uspf =  1.0 / srate * 10**6 # useconds per frame
		
		samplesum = 0
		peak = 0


		for i in range(fcnt):
			sample = struct.unpack("<h", waveread.readframes(1))[0]
			peak = max(sample, peak)
			samplesum += sample

		dc_off = samplesum / fcnt
		peak -= dc_off
		print(peak, dc_off)

		waveread.rewind()

		while True:
			while True:
				sample = struct.unpack("<h", waveread.readframes(1))[0]
				adjsample = (sample - dc_off) / peak
				if(adjsample > peak_th):
					break

			timestamp = 0
			adjsample = 0.0
			bits = ""

			for i in range(1, 10): # 9th bit is the stop bit
				while timestamp < bitdist*i:
					adjsample = (struct.unpack("<h", waveread.readframes(1))[0] - dc_off)/peak
					timestamp += uspf

				if i <= 8:
					bits += '1' if adjsample <= peak_th else '0'

			yield int(bits[::-1],2).to_bytes(1, byteorder="big")
	except struct.error as e: # really dirty hack to handle the end of frames
		raise StopIteration

def decode(wpath, opath):
	lastpacket = False
	rawbytes = bytestream(wave.open(wpath, "rb"))
	outfile = open(opath, "wb")

	try:
		while not lastpacket:
			if next(rawbytes) != b'\x3a':
				continue

			hdr_snd = next(rawbytes)

			if hdr_snd not in [b'\x20', b'\x01']:
				continue

			if hdr_snd == b'\x01':
				lastpacket = True

			addr_hi = next(rawbytes)
			addr_lo = next(rawbytes)

			if next(rawbytes) != b'\x00':
				print("\\x00 marker missing!")

			payload = b''

			for i in range(32):
				payload += next(rawbytes)

			outfile.write(payload)

			checksum = next(rawbytes, None) # I have no idea how this is calculated.

			if next(rawbytes) != b'\x0d':
				print("\\x0D end marker missing!")
			if next(rawbytes) != b'\x0a':
				print("\\x0A end marker missing!")

			print("@ " + (addr_hi+addr_lo).hex() + " chks: " + checksum.hex())

	except StopIteration:
		return


def main():
	if len(sys.argv) != 4:
		print("Usage: {} -d <input file> <output file>".format(sys.argv[0]))
		sys.exit(-1)

	if(sys.argv[1] == '-d'):
		decode(sys.argv[2], sys.argv[3])

if __name__ == '__main__':
	main()