# $FreeBSD: release/10.4.0/lib/libc/tests/net/getaddrinfo/Makefile 313488 2017-02-09 22:49:48Z ngie $

TESTSRC=	${SRCTOP}/contrib/netbsd-tests/lib/libc/net/${.CURDIR:T}

.include <bsd.own.mk>

BINDIR=		${TESTSDIR}

.error "This testcase needs to be ported to FreeBSD (the output from getaddrinfo_test differs from NetBSD)"

NETBSD_ATF_TESTS_SH=	getaddrinfo_test

PROGS=		h_gai

FILESDIR=	${TESTSDIR}/data

FILES=		basics_v4.exp	basics_v4v6.exp
FILES+=		no_host_v4.exp	no_host_v4v6.exp
FILES+=		no_serv_v4.exp	no_serv_v4v6.exp
FILES+=		sock_raw_v4.exp	sock_raw_v4v6.exp
FILES+=		spec_fam_v4.exp	spec_fam_v4v6.exp
FILES+=		scoped.exp
FILES+=		unsup_fam.exp

.include "../../Makefile.netbsd-tests"

.include <bsd.test.mk>
