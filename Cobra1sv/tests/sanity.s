org $C000

	jp start
start:
	ld hl, $C888
	ld a, $aa
	ld (hl), a
	jp start
	