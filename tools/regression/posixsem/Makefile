# $FreeBSD: release/10.4.0/tools/regression/posixsem/Makefile 276486 2014-12-31 23:25:37Z ngie $

PROG=	posixsem
SRCS=	posixsem.c test.c
DPADD=	${LIBKVM}
LDADD=	-lkvm
MAN=

WARNS?=	3

.include <bsd.prog.mk>
