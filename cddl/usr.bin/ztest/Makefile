# $FreeBSD: release/10.4.0/cddl/usr.bin/ztest/Makefile 321270 2017-07-20 01:01:16Z ngie $

.PATH: ${SRCTOP}/cddl/contrib/opensolaris/cmd/ztest

PROG=	ztest
MAN=

WARNS?=	0
CFLAGS+= -I${SRCTOP}/sys/cddl/compat/opensolaris
CFLAGS+= -I${SRCTOP}/cddl/compat/opensolaris/include
CFLAGS+= -I${SRCTOP}/cddl/compat/opensolaris/lib/libumem
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/lib/libzpool/common
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/lib/libnvpair
CFLAGS+= -I${SRCTOP}/sys/cddl/contrib/opensolaris/common/zfs
CFLAGS+= -I${SRCTOP}/sys/cddl/contrib/opensolaris/uts/common/fs/zfs
CFLAGS+= -I${SRCTOP}/sys/cddl/contrib/opensolaris/uts/common/sys
CFLAGS+= -I${SRCTOP}/sys/cddl/contrib/opensolaris/uts/common
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/head

DPADD=	${LIBGEOM} ${LIBM} ${LIBNVPAIR} ${LIBUMEM} ${LIBZPOOL} \
	${LIBPTHREAD} ${LIBAVL} ${LIBZFS_CORE} ${LIBZFS} ${LIBUUTIL}
LDADD=	-lgeom -lm -lnvpair -lumem -lzpool -lpthread -lavl -lzfs_core -lzfs \
	-luutil

CSTD=	c99

# Since there are many asserts in this program, it makes no sense to compile
# it without debugging.
CFLAGS+= -g -DDEBUG=1

.include <bsd.prog.mk>
