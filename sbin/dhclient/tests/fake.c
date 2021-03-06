/* $FreeBSD: release/10.4.0/sbin/dhclient/tests/fake.c 315610 2017-03-20 03:06:41Z ngie $ */

#include <setjmp.h>
#include <stdarg.h>
#include <stdio.h>

#include "dhcpd.h"

extern jmp_buf env;

void
error(char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	(void)vfprintf(stderr, fmt, ap);
	va_end(ap);
	fprintf(stderr, "\n");

	longjmp(env, 1);
}

int
warning(char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	(void)vfprintf(stderr, fmt, ap);
	va_end(ap);
	fprintf(stderr, "\n");

	/*
	 * The original warning() would return "ret" here. We do this to
	 * check warnings explicitely.
	 */
	longjmp(env, 1);
}

int
note(char *fmt, ...)
{
	int ret;
	va_list ap;

	va_start(ap, fmt);
	ret = vfprintf(stderr, fmt, ap);
	va_end(ap);
	fprintf(stderr, "\n");

	return ret;
}

void
bootp(struct packet *packet)
{
}

void
dhcp(struct packet *packet)
{
}
