# $FreeBSD: release/10.4.0/cddl/usr.sbin/lockstat/Makefile 321270 2017-07-20 01:01:16Z ngie $

.PATH: ${SRCTOP}/cddl/contrib/opensolaris/cmd/lockstat

PROG=		lockstat
NO_MAN=
SRCS=		lockstat.c sym.c
BINDIR?=	/usr/sbin

WARNS?=		1

CFLAGS+=	-I${SRCTOP}/sys/cddl/compat/opensolaris \
		-I${SRCTOP}/cddl/compat/opensolaris/include \
		-I${OPENSOLARIS_USR_DISTDIR}/head \
		-I${OPENSOLARIS_USR_DISTDIR}/lib/libdtrace/common \
		-I${OPENSOLARIS_USR_DISTDIR}/lib/libproc/common \
		-I${OPENSOLARIS_SYS_DISTDIR}/uts/common \
		-I${OPENSOLARIS_SYS_DISTDIR}/compat \
		-I${SRCTOP}/sys

CFLAGS+=	-DNEED_ERRLOC -g

#YFLAGS+=	-d

DPADD=		${LIBPTHREAD} ${LIBDTRACE} ${LIBY} ${LIBL} ${LIBPROC} \
		${LIBCTF} ${LIBELF} ${LIBZ} ${LIBRT} ${LIBUTIL} \
		${LIBRTLD_DB}
LDADD=		-lpthread -ldtrace -ly -ll -lproc -lctf -lelf -lz -lrt -lutil \
		-lrtld_db

.include <bsd.prog.mk>
