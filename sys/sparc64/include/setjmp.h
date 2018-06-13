/*-
 * Copyright (c) 1998 John Birrell <jb@cimlogic.com.au>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the author nor the names of any co-contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY JOHN BIRRELL AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	From: FreeBSD: src/sys/i386/include/setjmp.h,v 1.5 2000/10/06
 * $FreeBSD: release/10.4.0/sys/sparc64/include/setjmp.h 165967 2007-01-12 07:26:21Z imp $
 */

#ifndef	_MACHINE_SETJMP_H_
#define	_MACHINE_SETJMP_H_

#include <sys/cdefs.h>

#define	_JBLEN		5

#define	_JB_FP		0
#define	_JB_PC		1
#define	_JB_SP		2
#define	_JB_SIGMASK	3
#define	_JB_SIGFLAG	5

/*
 * jmp_buf and sigjmp_buf are encapsulated in different structs to force
 * compile-time diagnostics for mismatches.  The structs are the same
 * internally to avoid some run-time errors for mismatches.
 */
#if __BSD_VISIBLE || __POSIX_VISIBLE || __XSI_VISIBLE
typedef	struct _sigjmp_buf { long _sjb[_JBLEN + 1]; } sigjmp_buf[1];
#endif

typedef	struct _jmp_buf { long _jb[_JBLEN + 1]; } jmp_buf[1];

#endif /* !_MACHINE_SETJMP_H_ */
