# $FreeBSD: release/10.4.0/cddl/sbin/zpool/Makefile 321270 2017-07-20 01:01:16Z ngie $

.PATH: ${SRCTOP}/cddl/contrib/opensolaris/cmd/zpool
.PATH: ${SRCTOP}/cddl/contrib/opensolaris/cmd/stat/common
.PATH: ${SRCTOP}/sys/cddl/contrib/opensolaris/common/zfs

PROG=	zpool
MAN=	zpool.8 zpool-features.7
SRCS=	zpool_main.c zpool_vdev.c zpool_iter.c zpool_util.c zfs_comutil.c
SRCS+=	timestamp.c

WARNS?=	0
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/lib/libzpool/common
CFLAGS+= -I${SRCTOP}/cddl/compat/opensolaris/include
CFLAGS+= -I${SRCTOP}/cddl/compat/opensolaris/lib/libumem
CFLAGS+= -I${SRCTOP}/sys/cddl/compat/opensolaris
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/head
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/lib/libuutil/common
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/lib/libumem/common
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/lib/libzfs/common
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/lib/libzfs_core/common
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/lib/libnvpair
CFLAGS+= -I${SRCTOP}/sys/cddl/contrib/opensolaris/common/zfs
CFLAGS+= -I${SRCTOP}/sys/cddl/contrib/opensolaris/uts/common
CFLAGS+= -I${SRCTOP}/sys/cddl/contrib/opensolaris/uts/common/fs/zfs
CFLAGS+= -I${SRCTOP}/sys/cddl/contrib/opensolaris/uts/common/sys
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/lib/libzpool/common
CFLAGS+= -I${SRCTOP}/cddl/contrib/opensolaris/cmd/stat/common

DPADD=	${LIBAVL} ${LIBGEOM} ${LIBNVPAIR} \
	${LIBUMEM} ${LIBUTIL} ${LIBUUTIL} ${LIBZFS_CORE} ${LIBZFS}
LDADD=	-lavl -lgeom -lnvpair -lumem -lutil -luutil -lzfs_core -lzfs

.include <bsd.prog.mk>
