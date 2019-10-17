import sys
import wave


if len(sys.argv) != 3:
	print("Usage: {} <input wave> <output bin>".format(sys.argv[0]))
	sys.exit(-1)

wavein = wave.open(sys.argv[1], "rb")
binout = open(sys.argv[2], "wb")

rawsamples = wavein.readframes(wavein.getnframes())
binout.write(rawsamples)