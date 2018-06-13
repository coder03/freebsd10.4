#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: release/10.4.0/usr.bin/uudecode/Makefile 276486 2014-12-31 23:25:37Z ngie $

MAN=

.include <bsd.own.mk>

PROG=	uudecode
LINKS=	${BINDIR}/uudecode ${BINDIR}/b64decode

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.include <bsd.prog.mk>
