# $FreeBSD: release/10.4.0/sys/modules/sdhci_acpi/Makefile 318198 2017-05-11 21:01:02Z marius $

.PATH: ${.CURDIR}/../../dev/sdhci

KMOD=	sdhci_acpi
SRCS=	sdhci_acpi.c sdhci.h sdhci_if.h
SRCS+=	acpi_if.h device_if.h bus_if.h opt_acpi.h pci_if.h mmcbr_if.h

.include <bsd.kmod.mk>
