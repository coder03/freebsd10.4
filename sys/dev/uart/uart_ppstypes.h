/*-
 * Copyright (c) 2015 	Ian Lepore
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $FreeBSD: release/10.4.0/sys/dev/uart/uart_ppstypes.h 294229 2016-01-17 18:18:01Z ian $
 */

#ifndef _DEV_UART_PPSTYPES_H_
#define _DEV_UART_PPSTYPES_H_

/*
 * These constants are shared by several drivers including uart and usb_serial.
 */

#define	UART_PPS_SIGNAL_MASK	0x0f
#define	UART_PPS_OPTION_MASK	0xf0

#define	UART_PPS_DISABLED	0x00
#define	UART_PPS_CTS		0x01
#define	UART_PPS_DCD		0x02

#define	UART_PPS_INVERT_PULSE	0x10
#define	UART_PPS_NARROW_PULSE	0x20

#endif /* _DEV_UART_PPSTYPES_H_ */
