#$FreeBSD: release/10.4.0/sys/modules/ixv/Makefile 315333 2017-03-15 21:20:17Z erj $

.PATH:  ${.CURDIR}/../../dev/ixgbe

KMOD    = if_ixv
SRCS    = device_if.h bus_if.h pci_if.h
SRCS	+= opt_inet.h opt_inet6.h
SRCS    += if_ixv.c ixv_txrx.c ixv_osdep.c ixv_netmap.c
# Shared source
SRCS    += ixv_vf.c ixv_mbx.c
CFLAGS+= -I${.CURDIR}/../../dev/ixgbe -DSMP

.include <bsd.kmod.mk>
