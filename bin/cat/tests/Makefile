# $FreeBSD: release/10.4.0/bin/cat/tests/Makefile 320710 2017-07-06 05:26:27Z ngie $

NETBSD_ATF_TESTS_SH=		cat_test

FILESDIR=	${TESTSDIR}

FILES+=		d_align.in
FILES+=		d_align.out
FILES+=		d_b_output.in
FILES+=		d_b_output.out
FILES+=		d_se_output.in
FILES+=		d_se_output.out
FILES+=		d_s_output.in
FILES+=		d_s_output.out
FILES+=		d_vt_output.in
FILES+=		d_vt_output.out

.include <netbsd-tests.test.mk>

d_align.out: ${TESTSRC}/d_align.out
	sed -E -e 's,^[[:space:]]{7}\$$$$,\$$,' < ${.ALLSRC} > ${.TARGET}.tmp
	mv ${.TARGET}.tmp ${.TARGET}

CLEANFILES+=			d_align.out d_align.out.tmp

.include <bsd.test.mk>
