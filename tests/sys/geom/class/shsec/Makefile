# $FreeBSD: release/10.4.0/tests/sys/geom/class/shsec/Makefile 293821 2016-01-13 09:14:27Z ngie $

TESTSDIR=	${TESTSBASE}/sys/geom/class/${.CURDIR:T}

TAP_TESTS_SH+=	1_test
TAP_TESTS_SH+=	2_test

FILES+=		conf.sh
FILESNAME_conf.sh=	conf.sh
FILESDIR=	${TESTSDIR}

.for t in ${TAP_TESTS_SH}
TEST_METADATA.$t+=	required_user="root"
.endfor

.include <bsd.test.mk>
