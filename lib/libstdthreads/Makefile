# $FreeBSD: release/10.4.0/lib/libstdthreads/Makefile 313604 2017-02-11 06:37:24Z ngie $

LIB=	stdthreads
SHLIB_MAJOR= 0

INCS=	threads.h
SRCS=	threads.h call_once.c cnd.c mtx.c thrd.c tss.c

MAN=	thrd_create.3
MLINKS=	thrd_create.3 call_once.3 \
	thrd_create.3 cnd_broadcast.3 \
	thrd_create.3 cnd_destroy.3 \
	thrd_create.3 cnd_init.3 \
	thrd_create.3 cnd_signal.3 \
	thrd_create.3 cnd_timedwait.3 \
	thrd_create.3 cnd_wait.3 \
	thrd_create.3 mtx_destroy.3 \
	thrd_create.3 mtx_init.3 \
	thrd_create.3 mtx_lock.3 \
	thrd_create.3 mtx_timedlock.3 \
	thrd_create.3 mtx_trylock.3 \
	thrd_create.3 mtx_unlock.3 \
	thrd_create.3 thrd_current.3 \
	thrd_create.3 thrd_detach.3 \
	thrd_create.3 thrd_equal.3 \
	thrd_create.3 thrd_exit.3 \
	thrd_create.3 thrd_join.3 \
	thrd_create.3 thrd_sleep.3 \
	thrd_create.3 thrd_yield.3 \
	thrd_create.3 tss_create.3 \
	thrd_create.3 tss_delete.3 \
	thrd_create.3 tss_get.3 \
	thrd_create.3 tss_set.3

DPADD=	${LIBPTHREAD}
LDADD=	-lpthread

VERSION_DEF= ${SRCTOP}/lib/libc/Versions.def
SYMBOL_MAPS= ${.CURDIR}/Symbol.map

.include <bsd.lib.mk>
