#	@(#)Makefile	8.2 (Berkeley) 5/31/93
# $FreeBSD: release/10.4.0/bin/ln/Makefile 321093 2017-07-17 21:12:02Z ngie $

.include <bsd.own.mk>

PROG=	ln
MAN=	ln.1 symlink.7

LINKS=	${BINDIR}/ln ${BINDIR}/link
MLINKS=	ln.1 link.1

.if ${MK_TESTS} != "no"
SUBDIR+= 	tests
.endif

.include <bsd.prog.mk>
