# $FreeBSD: release/10.4.0/secure/usr.bin/Makefile 291792 2015-12-04 18:14:31Z bdrewery $

.include <bsd.own.mk>

SUBDIR=
.if ${MK_OPENSSL} != "no"
SUBDIR+=bdes openssl
.if ${MK_OPENSSH} != "no"
SUBDIR+=scp sftp ssh ssh-add ssh-agent ssh-keygen ssh-keyscan
.endif
.endif

.if ${MK_TESTS} != "no"
SUBDIR+=tests
.endif

SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
