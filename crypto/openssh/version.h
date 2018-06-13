/* $OpenBSD: version.h,v 1.77 2016/07/24 11:45:36 djm Exp $ */
/* $FreeBSD: release/10.4.0/crypto/openssh/version.h 323124 2017-09-01 22:52:18Z des $ */

#define SSH_VERSION	"OpenSSH_7.3"

#define SSH_PORTABLE	"p1"
#define SSH_RELEASE	SSH_VERSION SSH_PORTABLE

#define SSH_VERSION_FREEBSD	"FreeBSD-20170902"

#ifdef WITH_OPENSSL
#define OPENSSL_VERSION	SSLeay_version(SSLEAY_VERSION)
#else
#define OPENSSL_VERSION	"without OpenSSL"
#endif
