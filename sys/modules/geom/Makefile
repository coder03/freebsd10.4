# $FreeBSD: release/10.4.0/sys/modules/geom/Makefile 318159 2017-05-10 21:42:16Z marius $

.include <bsd.own.mk>

SUBDIR=	geom_bde \
	geom_bsd \
	geom_cache \
	geom_concat \
	geom_eli \
	geom_flashmap \
	geom_fox \
	geom_gate \
	geom_journal \
	geom_label \
	geom_linux_lvm \
	geom_mbr \
	geom_mirror \
	geom_mountver \
	geom_multipath \
	geom_nop \
	geom_part \
	geom_pc98 \
	geom_raid \
	geom_raid3 \
	geom_sched \
	geom_shsec \
	geom_stripe \
	geom_sunlabel \
	geom_uncompress \
	geom_uzip \
	geom_vinum \
	geom_virstor \
	geom_vol_ffs \
	geom_zero

.if ${MK_CCD} != "no" || defined(ALL_MODULES)
SUBDIR+=	geom_ccd
.endif

.include <bsd.subdir.mk>
