/* @(#)e_lgamma_r.c 1.3 95/01/18 */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunSoft, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: release/10.4.0/lib/msun/ld128/e_lgammal_r.c 284810 2015-06-25 13:01:10Z tijl $");

/*
 * See e_lgamma_r.c for complete comments.
 *
 * Converted to long double by Steven G. Kargl.
 */

#include "fpmath.h"
#include "math.h"
#include "math_private.h"

static const volatile double vzero = 0;

static const double
zero=  0,
half=  0.5,
one =  1;

static const long double
pi  =  3.14159265358979323846264338327950288e+00L;
/*
 * Domain y in [0x1p-119, 0.28], range ~[-1.4065e-36, 1.4065e-36]:
 * |(lgamma(2 - y) + y / 2) / y - a(y)| < 2**-119.1
 */
static const long double
a0  =  7.72156649015328606065120900824024296e-02L,
a1  =  3.22467033424113218236207583323018498e-01L,
a2  =  6.73523010531980951332460538330282217e-02L,
a3  =  2.05808084277845478790009252803463129e-02L,
a4  =  7.38555102867398526627292839296001626e-03L,
a5  =  2.89051033074152328576829509522483468e-03L,
a6  =  1.19275391170326097618357349881842913e-03L,
a7  =  5.09669524743042462515256340206203019e-04L,
a8  =  2.23154758453578096143609255559576017e-04L,
a9  =  9.94575127818397632126978731542755129e-05L,
a10 =  4.49262367375420471287545895027098145e-05L,
a11 =  2.05072127845117995426519671481628849e-05L,
a12 =  9.43948816959096748454087141447939513e-06L,
a13 =  4.37486780697359330303852050718287419e-06L,
a14 =  2.03920783892362558276037363847651809e-06L,
a15 =  9.55191070057967287877923073200324649e-07L,
a16 =  4.48993286185740853170657139487620560e-07L,
a17 =  2.13107543597620911675316728179563522e-07L,
a18 =  9.70745379855304499867546549551023473e-08L,
a19 =  5.61889970390290257926487734695402075e-08L,
a20 =  6.42739653024130071866684358960960951e-09L,
a21 =  3.34491062143649291746195612991870119e-08L,
a22 = -1.57068547394315223934653011440641472e-08L,
a23 =  1.30812825422415841213733487745200632e-08L;
/*
 * Domain x in [tc-0.24, tc+0.28], range ~[-6.3201e-37, 6.3201e-37]:
 * |(lgamma(x) - tf) - t(x - tc)| < 2**-120.3.
 */
static const long double
tc  =  1.46163214496836234126265954232572133e+00L,
tf  = -1.21486290535849608095514557177691584e-01L,
tt  =  1.57061739945077675484237837992951704e-36L,
t0  = -1.99238329499314692728655623767019240e-36L,
t1  = -6.08453430711711404116887457663281416e-35L,
t2  =  4.83836122723810585213722380854828904e-01L,
t3  = -1.47587722994530702030955093950668275e-01L,
t4  =  6.46249402389127526561003464202671923e-02L,
t5  = -3.27885410884813055008502586863748063e-02L,
t6  =  1.79706751152103942928638276067164935e-02L,
t7  = -1.03142230366363872751602029672767978e-02L,
t8  =  6.10053602051788840313573150785080958e-03L,
t9  = -3.68456960831637325470641021892968954e-03L,
t10 =  2.25976482322181046611440855340968560e-03L,
t11 = -1.40225144590445082933490395950664961e-03L,
t12 =  8.78232634717681264035014878172485575e-04L,
t13 = -5.54194952796682301220684760591403899e-04L,
t14 =  3.51912956837848209220421213975000298e-04L,
t15 = -2.24653443695947456542669289367055542e-04L,
t16 =  1.44070395420840737695611929680511823e-04L,
t17 = -9.27609865550394140067059487518862512e-05L,
t18 =  5.99347334438437081412945428365433073e-05L,
t19 = -3.88458388854572825603964274134801009e-05L,
t20 =  2.52476631610328129217896436186551043e-05L,
t21 = -1.64508584981658692556994212457518536e-05L,
t22 =  1.07434583475987007495523340296173839e-05L,
t23 = -7.03070407519397260929482550448878399e-06L,
t24 =  4.60968590693753579648385629003100469e-06L,
t25 = -3.02765473778832036018438676945512661e-06L,
t26 =  1.99238771545503819972741288511303401e-06L,
t27 = -1.31281299822614084861868817951788579e-06L,
t28 =  8.60844432267399655055574642052370223e-07L,
t29 = -5.64535486432397413273248363550536374e-07L,
t30 =  3.99357783676275660934903139592727737e-07L,
t31 = -2.95849029193433121795495215869311610e-07L,
t32 =  1.37790144435073124976696250804940384e-07L;
/*
 * Domain y in [-0.1, 0.232], range ~[-1.4046e-37, 1.4181e-37]:
 * |(lgamma(1 + y) + 0.5 * y) / y - u(y) / v(y)| < 2**-122.8
 */
static const long double
u0  = -7.72156649015328606065120900824024311e-02L,
u1  =  4.24082772271938167430983113242482656e-01L,
u2  =  2.96194003481457101058321977413332171e+00L,
u3  =  6.49503267711258043997790983071543710e+00L,
u4  =  7.40090051288150177152835698948644483e+00L,
u5  =  4.94698036296756044610805900340723464e+00L,
u6  =  2.00194224610796294762469550684947768e+00L,
u7  =  4.82073087750608895996915051568834949e-01L,
u8  =  6.46694052280506568192333848437585427e-02L,
u9  =  4.17685526755100259316625348933108810e-03L,
u10 =  9.06361003550314327144119307810053410e-05L,
v1  =  5.15937098592887275994320496999951947e+00L,
v2  =  1.14068418766251486777604403304717558e+01L,
v3  =  1.41164839437524744055723871839748489e+01L,
v4  =  1.07170702656179582805791063277960532e+01L,
v5  =  5.14448694179047879915042998453632434e+00L,
v6  =  1.55210088094585540637493826431170289e+00L,
v7  =  2.82975732849424562719893657416365673e-01L,
v8  =  2.86424622754753198010525786005443539e-02L,
v9  =  1.35364253570403771005922441442688978e-03L,
v10 =  1.91514173702398375346658943749580666e-05L,
v11 = -3.25364686890242327944584691466034268e-08L;
/*
 * Domain x in (2, 3], range ~[-1.3341e-36, 1.3536e-36]:
 * |(lgamma(y+2) - 0.5 * y) / y - s(y)/r(y)| < 2**-120.1
 * with y = x - 2.
 */
static const long double
s0  = -7.72156649015328606065120900824024297e-02L,
s1  =  1.23221687850916448903914170805852253e-01L,
s2  =  5.43673188699937239808255378293820020e-01L,
s3  =  6.31998137119005233383666791176301800e-01L,
s4  =  3.75885340179479850993811501596213763e-01L,
s5  =  1.31572908743275052623410195011261575e-01L,
s6  =  2.82528453299138685507186287149699749e-02L,
s7  =  3.70262021550340817867688714880797019e-03L,
s8  =  2.83374000312371199625774129290973648e-04L,
s9  =  1.15091830239148290758883505582343691e-05L,
s10 =  2.04203474281493971326506384646692446e-07L,
s11 =  9.79544198078992058548607407635645763e-10L,
r1  =  2.58037466655605285937112832039537492e+00L,
r2  =  2.86289413392776399262513849911531180e+00L,
r3  =  1.78691044735267497452847829579514367e+00L,
r4  =  6.89400381446725342846854215600008055e-01L,
r5  =  1.70135865462567955867134197595365343e-01L,
r6  =  2.68794816183964420375498986152766763e-02L,
r7  =  2.64617234244861832870088893332006679e-03L,
r8  =  1.52881761239180800640068128681725702e-04L,
r9  =  4.63264813762296029824851351257638558e-06L,
r10 =  5.89461519146957343083848967333671142e-08L,
r11 =  1.79027678176582527798327441636552968e-10L;
/*
 * Domain z in [8, 0x1p70], range ~[-9.8214e-35, 9.8214e-35]:
 * |lgamma(x) - (x - 0.5) * (log(x) - 1) - w(1/x)| < 2**-113.0
 */
static const long double
w0  =  4.18938533204672741780329736405617738e-01L,
w1  =  8.33333333333333333333333333332852026e-02L,
w2  = -2.77777777777777777777777727810123528e-03L,
w3  =  7.93650793650793650791708939493907380e-04L,
w4  = -5.95238095238095234390450004444370959e-04L,
w5  =  8.41750841750837633887817658848845695e-04L,
w6  = -1.91752691752396849943172337347259743e-03L,
w7  =  6.41025640880333069429106541459015557e-03L,
w8  = -2.95506530801732133437990433080327074e-02L,
w9  =  1.79644237328444101596766586979576927e-01L,
w10 = -1.39240539108367641920172649259736394e+00L,
w11 =  1.33987701479007233325288857758641761e+01L,
w12 = -1.56363596431084279780966590116006255e+02L,
w13 =  2.14830978044410267201172332952040777e+03L,
w14 = -3.28636067474227378352761516589092334e+04L,
w15 =  5.06201257747865138432663574251462485e+05L,
w16 = -6.79720123352023636706247599728048344e+06L,
w17 =  6.57556601705472106989497289465949255e+07L,
w18 = -3.26229058141181783534257632389415580e+08L;

static long double
sin_pil(long double x)
{
	volatile long double vz;
	long double y,z;
	uint64_t lx, n;
	uint16_t hx;

	y = -x;

	vz = y+0x1.p112;
	z = vz-0x1.p112;
	if (z == y)
	    return zero;

	vz = y+0x1.p110;
	EXTRACT_LDBL128_WORDS(hx,lx,n,vz);
	z = vz-0x1.p110;
	if (z > y) {
	    z -= 0.25;
	    n--;
	}
	n &= 7;
	y = y - z + n * 0.25;

	switch (n) {
	    case 0:   y =  __kernel_sinl(pi*y,zero,0); break;
	    case 1:
	    case 2:   y =  __kernel_cosl(pi*(0.5-y),zero); break;
	    case 3:
	    case 4:   y =  __kernel_sinl(pi*(one-y),zero,0); break;
	    case 5:
	    case 6:   y = -__kernel_cosl(pi*(y-1.5),zero); break;
	    default:  y =  __kernel_sinl(pi*(y-2.0),zero,0); break;
	    }
	return -y;
}

long double
lgammal_r(long double x, int *signgamp)
{
	long double nadj,p,p1,p2,p3,q,r,t,w,y,z;
	uint64_t llx,lx;
	int i;
	uint16_t hx,ix;

	EXTRACT_LDBL128_WORDS(hx,lx,llx,x);

    /* purge +-Inf and NaNs */
	*signgamp = 1;
	ix = hx&0x7fff;
	if(ix==0x7fff) return x*x;

   /* purge +-0 and tiny arguments */
	*signgamp = 1-2*(hx>>15);
	if(ix<0x3fff-116) {		/* |x|<2**-(p+3), return -log(|x|) */
	    if((ix|lx|llx)==0)
		return one/vzero;
	    return -logl(fabsl(x));
	}

    /* purge negative integers and start evaluation for other x < 0 */
	if(hx&0x8000) {
	    *signgamp = 1;
	    if(ix>=0x3fff+112) 		/* |x|>=2**(p-1), must be -integer */
		return one/vzero;
	    t = sin_pil(x);
	    if(t==zero) return one/vzero;
	    nadj = logl(pi/fabsl(t*x));
	    if(t<zero) *signgamp = -1;
	    x = -x;
	}

    /* purge 1 and 2 */
	if((ix==0x3fff || ix==0x4000) && (lx|llx)==0) r = 0;
    /* for x < 2.0 */
	else if(ix<0x4000) {
	    if(x<=8.9999961853027344e-01) {
		r = -logl(x);
		if(x>=7.3159980773925781e-01) {y = 1-x; i= 0;}
		else if(x>=2.3163998126983643e-01) {y= x-(tc-1); i=1;}
	  	else {y = x; i=2;}
	    } else {
		r = 0;
	        if(x>=1.7316312789916992e+00) {y=2-x;i=0;}
	        else if(x>=1.2316322326660156e+00) {y=x-tc;i=1;}
		else {y=x-1;i=2;}
	    }
	    switch(i) {
	      case 0:
		z = y*y;
		p1 = a0+z*(a2+z*(a4+z*(a6+z*(a8+z*(a10+z*(a12+z*(a14+z*(a16+
		    z*(a18+z*(a20+z*a22))))))))));
		p2 = z*(a1+z*(a3+z*(a5+z*(a7+z*(a9+z*(a11+z*(a13+z*(a15+
		    z*(a17+z*(a19+z*(a21+z*a23)))))))))));
		p  = y*p1+p2;
		r  += p-y/2; break;
	      case 1:
		p = t0+y*t1+tt+y*y*(t2+y*(t3+y*(t4+y*(t5+y*(t6+y*(t7+y*(t8+
		    y*(t9+y*(t10+y*(t11+y*(t12+y*(t13+y*(t14+y*(t15+y*(t16+
		    y*(t17+y*(t18+y*(t19+y*(t20+y*(t21+y*(t22+y*(t23+
		    y*(t24+y*(t25+y*(t26+y*(t27+y*(t28+y*(t29+y*(t30+
		    y*(t31+y*t32))))))))))))))))))))))))))))));
		r += tf + p; break;
	      case 2:
		p1 = y*(u0+y*(u1+y*(u2+y*(u3+y*(u4+y*(u5+y*(u6+y*(u7+
		    y*(u8+y*(u9+y*u10))))))))));
		p2 = one+y*(v1+y*(v2+y*(v3+y*(v4+y*(v5+y*(v6+y*(v7+
		    y*(v8+y*(v9+y*(v10+y*v11))))))))));
		r += p1/p2-y/2;
	    }
	}
    /* x < 8.0 */
	else if(ix<0x4002) {
	    i = x;
	    y = x-i;
	    p = y*(s0+y*(s1+y*(s2+y*(s3+y*(s4+y*(s5+y*(s6+y*(s7+y*(s8+
		y*(s9+y*(s10+y*s11)))))))))));
	    q = one+y*(r1+y*(r2+y*(r3+y*(r4+y*(r5+y*(r6+y*(r7+y*(r8+
		y*(r9+y*(r10+y*r11))))))))));
	    r = y/2+p/q;
	    z = 1;	/* lgamma(1+s) = log(s) + lgamma(s) */
	    switch(i) {
	    case 7: z *= (y+6);		/* FALLTHRU */
	    case 6: z *= (y+5);		/* FALLTHRU */
	    case 5: z *= (y+4);		/* FALLTHRU */
	    case 4: z *= (y+3);		/* FALLTHRU */
	    case 3: z *= (y+2);		/* FALLTHRU */
		    r += logl(z); break;
	    }
    /* 8.0 <= x < 2**(p+3) */
	} else if (ix<0x3fff+116) {
	    t = logl(x);
	    z = one/x;
	    y = z*z;
	    w = w0+z*(w1+y*(w2+y*(w3+y*(w4+y*(w5+y*(w6+y*(w7+y*(w8+
		y*(w9+y*(w10+y*(w11+y*(w12+y*(w13+y*(w14+y*(w15+y*(w16+
		y*(w17+y*w18)))))))))))))))));
	    r = (x-half)*(t-one)+w;
    /* 2**(p+3) <= x <= inf */
	} else 
	    r =  x*(logl(x)-1);
	if(hx&0x8000) r = nadj - r;
	return r;
}
