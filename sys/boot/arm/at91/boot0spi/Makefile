#  $FreeBSD: release/10.4.0/sys/boot/arm/at91/boot0spi/Makefile 276486 2014-12-31 23:25:37Z ngie $

.PATH:	${.CURDIR}/../libat91

P=boot0spi
FILES=${P}
SRCS=arm_init.S main.c
MAN=
LDFLAGS=-e 0 -T ${.CURDIR}/../linker.cfg
OBJS+=  ${SRCS:N*.h:R:S/$/.o/g}

.include <bsd.prog.mk>

CFLAGS+=-DBOOT_BOOT0
