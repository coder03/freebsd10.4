# $FreeBSD: release/10.4.0/sys/modules/isp/Makefile 316399 2017-04-02 10:52:00Z mav $

.PATH: ${.CURDIR}/../../dev/isp

KMOD=	isp
SRCS=	bus_if.h device_if.h pci_if.h \
	opt_cam.h opt_ddb.h opt_isp.h \
	isp.c isp_library.c isp_target.c isp_freebsd.c isp_pci.c

.if ${MACHINE} == sparc64
SRCS+=	isp_sbus.c ofw_bus_if.h
.endif
CFLAGS+=	-Wformat -Wall -Werror

.include <bsd.kmod.mk>
