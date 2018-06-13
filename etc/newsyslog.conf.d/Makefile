# $FreeBSD: release/10.4.0/etc/newsyslog.conf.d/Makefile 320229 2017-06-22 07:54:12Z ngie $

.include <bsd.own.mk>

BINDIR=		/etc/newsyslog.conf.d

FILES=

.if ${MK_OFED} != "no"
FILES+=		opensm.conf
.endif

.include <bsd.prog.mk>
