# $FreeBSD: release/10.4.0/secure/libexec/ssh-pkcs11-helper/Makefile 296781 2016-03-12 23:53:20Z des $

.include <bsd.own.mk>

PROG=	ssh-pkcs11-helper
SRCS=	ssh-pkcs11.c ssh-pkcs11-helper.c
MAN=	ssh-pkcs11-helper.8
CFLAGS+=-I${SSHDIR} -include ssh_namespace.h
SRCS+=	ssh_namespace.h

DPADD=	${LIBSSH}
LDADD=	-lssh
USEPRIVATELIB= ssh

.if ${MK_LDNS} != "no"
CFLAGS+=	-DHAVE_LDNS=1
#DPADD+=	${LIBLDNS}
#LDADD+=	-lldns
#USEPRIVATELIB+= ldns
.endif

DPADD+= ${LIBCRYPT} ${LIBCRYPTO} ${LIBZ}
LDADD+= -lcrypt -lcrypto -lz

.include <bsd.prog.mk>

.PATH:	${SSHDIR}
