#	From: @(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: release/10.4.0/usr.sbin/lpr/lpr/Makefile 321275 2017-07-20 01:07:02Z ngie $

.PATH: ${.CURDIR:H}/common_source

BINDIR=	/usr/bin

PROG=	lpr
MAN=	lpr.1 printcap.5
BINOWN=	root
BINGRP=	daemon
BINMODE= 6555

CFLAGS+= -I${.CURDIR:H}/common_source

WARNS?=	2

DPADD=	${LIBLPR}
LDADD=	${LIBLPR}

.include <bsd.prog.mk>
