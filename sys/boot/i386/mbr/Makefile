# $FreeBSD: release/10.4.0/sys/boot/i386/mbr/Makefile 276486 2014-12-31 23:25:37Z ngie $

PROG=	mbr
STRIP=
BINMODE=${NOBINMODE}
MAN=
SRCS=	${PROG}.s

# MBR flags: 0x80 -- try packet interface (also known as EDD or LBA)
BOOT_MBR_FLAGS?=	0x80

ORG=	0x600

AFLAGS+=--defsym FLAGS=${BOOT_MBR_FLAGS}
LDFLAGS=-e start -Ttext ${ORG} -Wl,-N,-S,--oformat,binary

.include <bsd.prog.mk>
