#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: release/10.4.0/usr.sbin/chown/Makefile 321130 2017-07-18 16:27:10Z ngie $

.include <bsd.own.mk>

PROG=	chown
LINKS=	${BINDIR}/chown /usr/bin/chgrp
MAN=	chgrp.1 chown.8

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.include <bsd.prog.mk>
