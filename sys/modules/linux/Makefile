# $FreeBSD: release/10.4.0/sys/modules/linux/Makefile 302964 2016-07-17 15:23:32Z dchagin $

.if ${MACHINE_CPUARCH} == "amd64"
SFX= 32
CFLAGS+=-DCOMPAT_FREEBSD32 -DCOMPAT_LINUX32
.endif

.PATH: ${.CURDIR}/../../compat/linux ${.CURDIR}/../../${MACHINE_CPUARCH}/linux${SFX}

VDSO=	linux${SFX}_vdso

KMOD=	linux
SRCS=	linux_fork.c linux${SFX}_dummy.c linux_file.c linux_event.c \
	linux_futex.c linux_getcwd.c linux_ioctl.c linux_ipc.c \
	linux${SFX}_machdep.c linux_misc.c linux_signal.c \
	linux_socket.c linux_stats.c linux_sysctl.c linux${SFX}_sysent.c \
	linux${SFX}_sysvec.c linux_uid16.c linux_time.c \
	linux_timer.c linux_vdso.c \
	opt_inet6.h opt_compat.h opt_kdtrace.h opt_posix.h opt_usb.h \
	vnode_if.h device_if.h bus_if.h assym.s \
	linux${SFX}_support.s
DPSRCS=	linux${SFX}_genassym.c

# XXX: for assym.s
SRCS+=  opt_kstack_pages.h opt_nfs.h opt_compat.h opt_hwpmc_hooks.h
.if ${MACHINE_CPUARCH} == "i386"
SRCS+=	opt_apic.h
.endif

OBJS=	${VDSO}.so

.if ${MACHINE_CPUARCH} == "i386"
SRCS+=	linux_ptrace.c imgact_linux.c linux_util.c linux_mib.c linux_mmap.c \
	linux_emul.c opt_cpu.h linux.c
.endif

.if ${MACHINE_CPUARCH} == "i386"
EXPORT_SYMS=
EXPORT_SYMS+=	linux_emul_path
EXPORT_SYMS+=	linux_get_osname
EXPORT_SYMS+=	linux_get_osrelease
EXPORT_SYMS+=	linux_ioctl_register_handler
EXPORT_SYMS+=	linux_ioctl_unregister_handler
.endif

CLEANFILES=	linux${SFX}_assym.h linux${SFX}_genassym.o linux${SFX}_locore.o

linux${SFX}_assym.h: linux${SFX}_genassym.o
	sh ${SYSDIR}/kern/genassym.sh linux${SFX}_genassym.o > ${.TARGET}

linux${SFX}_locore.o: linux${SFX}_assym.h assym.s
	${CC} -x assembler-with-cpp -DLOCORE -m32 -shared -s			\
	-pipe -I. -I${SYSDIR} -Werror -Wall -fno-common -nostdinc -nostdlib	\
	-fno-omit-frame-pointer							\
	-Wl,-T${.CURDIR}/../../${MACHINE_CPUARCH}/linux${SFX}/${VDSO}.lds.s	\
	-Wl,-soname=${VDSO}.so.1,--eh-frame-hdr,-fPIC,-warn-common		\
	    ${.IMPSRC} -o ${.TARGET}

linux${SFX}_support.o: linux${SFX}_assym.h assym.s
	${CC} -c -x assembler-with-cpp -DLOCORE ${CFLAGS} \
	    ${.IMPSRC} -o ${.TARGET}

.if ${MACHINE_CPUARCH} == "amd64"
${VDSO}.so: linux${SFX}_locore.o
	${OBJCOPY} --input-target binary --output-target elf64-x86-64-freebsd			\
	    --binary-architecture i386 linux${SFX}_locore.o ${.TARGET}
.else
${VDSO}.so: linux${SFX}_locore.o
	${OBJCOPY} --input-target binary --output-target elf32-i386-freebsd			\
	    --binary-architecture i386 linux${SFX}_locore.o ${.TARGET}
.endif

linux${SFX}_genassym.o:
	${CC} -c ${CFLAGS:N-fno-common} ${.IMPSRC}

.if !defined(KERNBUILDDIR)
opt_inet6.h:
	echo "#define INET6 1" > ${.TARGET}
.if defined(KTR)
CFLAGS+=	-DKTR
.endif
.if defined(DEBUG)
CFLAGS+=	-DDEBUG
.endif
.endif

.include <bsd.kmod.mk>
