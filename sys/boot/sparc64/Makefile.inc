# $FreeBSD: release/10.4.0/sys/boot/sparc64/Makefile.inc 180012 2008-06-25 21:33:28Z ru $

BINDIR?=	/boot
CFLAGS+=	-ffreestanding
LDFLAGS+=	-nostdlib

.include "../Makefile.inc"
