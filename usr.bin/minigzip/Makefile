# $FreeBSD: release/10.4.0/usr.bin/minigzip/Makefile 312375 2017-01-18 08:20:36Z delphij $

SRCDIR=	${.CURDIR}/../../contrib/zlib/test
.PATH:	${SRCDIR}

PROG=	minigzip

WARNS?=	5
CFLAGS+=-DUSE_MMAP
DPADD=	${LIBZ}
LDADD=	-lz

.include <bsd.prog.mk>
