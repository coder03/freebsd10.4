# $FreeBSD: release/10.4.0/usr.sbin/wpa/Makefile.inc 252726 2013-07-04 21:12:58Z rpaulo $

BINDIR?=	/usr/sbin

WPA_DISTDIR?= 		${.CURDIR}/../../../contrib/wpa/
WPA_SUPPLICANT_DISTDIR?=${WPA_DISTDIR}/wpa_supplicant
HOSTAPD_DISTDIR?=	${WPA_DISTDIR}/hostapd

.PATH.c:${.CURDIR}/.. \
	${WPA_DISTDIR}/src/ap \
	${WPA_DISTDIR}/src/common \
	${WPA_DISTDIR}/src/crypto \
	${WPA_DISTDIR}/src/eapol_auth \
	${WPA_DISTDIR}/src/eap_common \
	${WPA_DISTDIR}/src/eap_peer \
	${WPA_DISTDIR}/src/eap_server \
	${WPA_DISTDIR}/src/eapol_supp \
	${WPA_DISTDIR}/src/l2_packet \
	${WPA_DISTDIR}/src/radius \
	${WPA_DISTDIR}/src/rsn_supp \
	${WPA_DISTDIR}/src/tls \
	${WPA_DISTDIR}/src/utils \
	${WPA_DISTDIR}/src/wps

CFLAGS+=-I${.CURDIR}
CFLAGS+=-I${HOSTAPD_DISTDIR}
CFLAGS+=-I${WPA_DISTDIR}/src
CFLAGS+=-I${WPA_DISTDIR}/src/common
CFLAGS+=-I${WPA_DISTDIR}/src/crypto
CFLAGS+=-I${WPA_DISTDIR}/src/drivers
CFLAGS+=-I${WPA_DISTDIR}/src/l2_packet
CFLAGS+=-I${WPA_DISTDIR}/src/utils
CFLAGS+=-I${WPA_DISTDIR}/src/wps

CFLAGS+= -DCONFIG_CTRL_IFACE
CFLAGS+= -DCONFIG_CTRL_IFACE_UNIX

.include <bsd.own.mk>
