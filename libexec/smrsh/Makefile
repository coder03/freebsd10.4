#	@(#)Makefile	8.1 (Berkeley) 7/2/95
# $FreeBSD: release/10.4.0/libexec/smrsh/Makefile 321267 2017-07-20 00:52:11Z ngie $

SENDMAIL_DIR=${SRCTOP}/contrib/sendmail
.PATH:	${SENDMAIL_DIR}/smrsh

PROG=	smrsh
SRCS=	smrsh.c
MAN=	smrsh.8
CFLAGS+=-I${SENDMAIL_DIR}/src -I${SENDMAIL_DIR}/include -I.

LIBSMDIR=	${.OBJDIR}/../../lib/libsm
LIBSM=		${LIBSMDIR}/libsm.a

DPADD=	${LIBSM}
LDADD=	${LIBSM}

WARNS?=	2

SRCS+=	sm_os.h
CLEANFILES+=sm_os.h

# User customizations to the sendmail build environment
CFLAGS+=${SENDMAIL_CFLAGS}
DPADD+=${SENDMAIL_DPADD}
LDADD+=${SENDMAIL_LDADD}
LDFLAGS+=${SENDMAIL_LDFLAGS}

sm_os.h:
	ln -sf ${SENDMAIL_DIR}/include/sm/os/sm_os_freebsd.h sm_os.h

.include <bsd.prog.mk>
