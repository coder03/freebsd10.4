# $FreeBSD: release/10.4.0/etc/periodic/security/Makefile 315348 2017-03-16 01:50:11Z ngie $

.include <bsd.own.mk>

FILESGROUPS=	FILES DATA

FILES=	100.chksetuid \
	110.neggrpperm \
	200.chkmounts \
	300.chkuid0 \
	400.passwdless \
	410.logincheck \
	700.kernelmsg \
	800.loginfail
DATA=	security.functions

# NB: keep these sorted by MK_* knobs

.if ${MK_IPFILTER} != "no"
FILES+=	510.ipfdenied
FILES+=	610.ipf6denied
.endif

.if ${MK_IPFW} != "no"
FILES+=	500.ipfwdenied \
	550.ipfwlimit
.endif

.if ${MK_PF} != "no"
FILES+=	520.pfdenied
.endif

.if ${MK_PKGTOOLS} != "no"
FILES+=	460.chkportsum
.endif

.if ${MK_INETD} != "no" && ${MK_TCP_WRAPPERS} != "no"
FILES+=	900.tcpwrap
.endif

.include <bsd.prog.mk>
