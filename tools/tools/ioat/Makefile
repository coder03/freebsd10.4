# $FreeBSD: release/10.4.0/tools/tools/ioat/Makefile 301678 2016-06-08 18:21:25Z ngie $

PROG=	ioatcontrol
MAN=	ioatcontrol.8
BINDIR?=	/usr/bin

CFLAGS+=	-I${SRCTOP}/sys/dev/ioat

#LIBADD=	util
LDADD=	-lutil

WARNS?=	6

.include <bsd.prog.mk>
