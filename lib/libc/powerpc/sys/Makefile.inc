# $FreeBSD: release/10.4.0/lib/libc/powerpc/sys/Makefile.inc 305341 2016-09-03 11:09:47Z kib $

MDASM+=	brk.S cerror.S exect.S pipe.S sbrk.S setlogin.S

# Don't generate default code for these syscalls:
NOASM=	break.o exit.o getlogin.o openbsd_poll.o sstk.o yield.o

PSEUDO=	_getlogin.o _exit.o
.if !defined(WITHOUT_SYSCALL_COMPAT)
PSEUDO+= _pread.o _pwrite.o _lseek.o _mmap.o _ftruncate.o _truncate.o
.endif
