# $FreeBSD: release/10.4.0/tools/diag/localeck/Makefile 276486 2014-12-31 23:25:37Z ngie $

PROG=	localeck
MAN=
WARNS?=	4

LOCALEDIR?= /usr/share/locale

test: ${PROG}
	sh docheck.sh ${LOCALEDIR}

.include <bsd.prog.mk>
