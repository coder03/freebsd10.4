# $FreeBSD: release/10.4.0/usr.sbin/etcupdate/tests/Makefile 313488 2017-02-09 22:49:48Z ngie $

PLAIN_TESTS_SH=
.for test in	always_test \
		conflicts_test \
		fbsdid_test \
		ignore_test \
		preworld_test \
		tests_test \
		tzsetup_test
PLAIN_TESTS_SH+=	${test}
TEST_METADATA.${test}+=	required_user="root"
.endfor

.include <bsd.test.mk>
