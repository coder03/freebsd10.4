#	@(#)Makefile.inc	8.1 (Berkeley) 6/4/93
# $FreeBSD: release/10.4.0/lib/libc/amd64/gen/Makefile.inc 230429 2012-01-21 18:00:28Z kib $

SRCS+=	_setjmp.S _set_tp.c rfork_thread.S setjmp.S sigsetjmp.S \
	fabs.S getcontextx.c \
	infinity.c ldexp.c makecontext.c signalcontext.c \
	flt_rounds.c fpgetmask.c fpsetmask.c fpgetprec.c fpsetprec.c \
	fpgetround.c fpsetround.c fpgetsticky.c
