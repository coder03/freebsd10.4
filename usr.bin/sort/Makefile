# $FreeBSD: release/10.4.0/usr.bin/sort/Makefile 281834 2015-04-21 15:47:00Z garga $

.include <bsd.own.mk>

PROG=	sort

SRCS=	bwstring.c coll.c file.c mem.c radixsort.c sort.c vsort.c

sort.1: sort.1.in
	/usr/bin/sed ${MAN_SUB} ${.ALLSRC} >${.TARGET}

CLEANFILES+= sort.1

.if defined(WITH_THREADS)
CFLAGS+= -DSORT_THREADS
LDADD+= -lpthread -lmd
MAN_SUB+= -e 's|%%THREADS%%||g'
.else
LDADD+= -lmd
MAN_SUB+= -e 's|%%THREADS%%|\.\\"|g'
.endif

.if !defined(WITHOUT_NLS)
NLS+=	hu_HU.ISO8859-2
NLSSRCFILES= ${NLS:S@$@.msg@}
MAN_SUB+= -e 's|%%NLS%%||g'
.for lang in ${NLS}
NLSSRCDIR_${lang}= ${.CURDIR}/nls
.endfor
.else
CFLAGS+= -DWITHOUT_NLS
MAN_SUB+= -e 's|%%NLS%%|\.\\"|g'
.endif

.include <bsd.prog.mk>
