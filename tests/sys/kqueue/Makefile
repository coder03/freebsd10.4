# $FreeBSD: release/10.4.0/tests/sys/kqueue/Makefile 313508 2017-02-10 02:29:39Z ngie $

TESTSRC=	${SRCTOP}/contrib/netbsd-tests/kernel/kqueue

TESTSDIR=	${TESTSBASE}/sys/kqueue
BINDIR=		${TESTSDIR}

NETBSD_ATF_TESTS_C=	proc1_test
# XXX: fails `ke.fflags & NOTE_TRACKERR` invariant
#NETBSD_ATF_TESTS_C+=	proc2_test
NETBSD_ATF_TESTS_C+=	proc3_test
NETBSD_ATF_TESTS_C+=	sig_test
NETBSD_ATF_TESTS_C+=	vnode_test

WARNS?=		3

TESTS_SUBDIRS+=	libkqueue

.include <netbsd-tests.test.mk>
.include <bsd.test.mk>
