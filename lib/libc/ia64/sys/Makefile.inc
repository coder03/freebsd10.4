# $FreeBSD: release/10.4.0/lib/libc/ia64/sys/Makefile.inc 305341 2016-09-03 11:09:47Z kib $

SRCS+=	__vdso_gettc.c

MDASM+=	Ovfork.S brk.S cerror.S exect.S fork.S getcontext.S pipe.S \
	sbrk.S setlogin.S sigreturn.S swapcontext.S

# Don't generate default code for these syscalls:
NOASM=	break.o exit.o getlogin.o openbsd_poll.o sstk.o vfork.o yield.o

PSEUDO=	_getlogin.o _exit.o
.if !defined(WITHOUT_SYSCALL_COMPAT)
PSEUDO+= _pread.o _pwrite.o _lseek.o _mmap.o _ftruncate.o _truncate.o
.endif