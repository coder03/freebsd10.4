# $FreeBSD: release/10.4.0/gnu/usr.bin/cc/include/Makefile 255185 2013-09-03 17:33:29Z jmg $

.include <bsd.own.mk>

.include "../Makefile.inc"

INCSDIR=${INCLUDEDIR}/gcc/${GCCVER}

.PATH: ${GCCDIR}/config/${GCC_CPU} ${.CURDIR}/../../../../contrib/llvm/tools/clang/lib/Headers

.if ${TARGET_ARCH} == "i386" || ${TARGET_ARCH} == "amd64"
INCS=	ammintrin.h emmintrin.h mmintrin.h mm3dnow.h pmmintrin.h \
	tmmintrin.h xmmintrin.h mm_malloc.h
INCS+=	wmmintrin.h __wmmintrin_aes.h __wmmintrin_pclmul.h
.elif ${TARGET_ARCH} == "ia64"
INCS=	ia64intrin.h
.elif ${TARGET_ARCH} == "arm"
INCS=	mmintrin.h
.elif ${TARGET_ARCH} == "powerpc" || ${TARGET_ARCH} == "powerpc64"
INCS=	ppc-asm.h altivec.h spe.h
.endif

mm_malloc.h: pmm_malloc.h
	@rm -rf ${.TARGET}
	@cp ${.ALLSRC} ${.TARGET}
CLEANFILES+=	mm_malloc.h

.include <bsd.prog.mk>
