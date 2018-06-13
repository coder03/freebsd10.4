# $FreeBSD: release/10.4.0/usr.bin/bmake/tests/test-new.mk 236339 2012-05-30 22:26:16Z obrien $

NEW_DIR!=	make -C ${.CURDIR}/../../../../usr.bin/make -V .OBJDIR

all:
	rm -rf /tmp/${USER}.make.test
	env MAKE_PROG=${NEW_DIR}/make ${.SHELL} ./all.sh

.include <bsd.obj.mk>
