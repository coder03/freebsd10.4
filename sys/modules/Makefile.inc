# $FreeBSD: release/10.4.0/sys/modules/Makefile.inc 291811 2015-12-04 18:44:12Z bdrewery $

.if ${MACHINE} == "pc98"
CFLAGS+= -DPC98
.endif

SUBDIR_PARALLEL=	yes
