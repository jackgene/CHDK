#31F1
PLATFORMID=12785


PLATFORMOS=dryos

MEMBASEADDR=0x1900
MEMISOSTART=0x1488E0
ROMBASEADDR=0xff810000 
NEED_ENCODED_DISKBOOT=4

PLFLAGS=-DMEMBASEADDR=$(MEMBASEADDR) -DMEMISOSTART=$(MEMISOSTART) -DMEMISOSIZE=$(MEMISOSIZE)

KEYSYS=d4a

PLATFORMOSVER=43