#    this code completely copied from ../100k - no changes

#0x30F4
PLATFORMID=12532

PLATFORMOS=vxworks

MEMBASEADDR=0x1900
RESTARTSTART=0x50000
MEMISOSTART=0xA85F0
ROMBASEADDR=0xff810000


PLFLAGS=-DMEMBASEADDR=$(MEMBASEADDR) -DMEMISOSTART=$(MEMISOSTART) -DMEMISOSIZE=$(MEMISOSIZE)
PLFLAGS+=-DRESTARTSTART=$(RESTARTSTART)