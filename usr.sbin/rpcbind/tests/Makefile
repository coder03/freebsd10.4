# $FreeBSD: release/10.4.0/usr.sbin/rpcbind/tests/Makefile 296994 2016-03-17 20:00:49Z asomers $

.include <bsd.own.mk>

.PATH:	${.CURDIR}/..

ATF_TESTS_C=	addrmerge_test
CFLAGS+=	-I${.CURDIR}/.. -Wno-cast-qual
SRCS.addrmerge_test=	addrmerge_test.c util.c

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

WARNS?=	3

.include <bsd.test.mk>
