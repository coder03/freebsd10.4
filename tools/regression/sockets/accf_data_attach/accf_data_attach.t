#!/bin/sh
# $FreeBSD: release/10.4.0/tools/regression/sockets/accf_data_attach/accf_data_attach.t 137587 2004-11-11 19:47:55Z nik $

cd `dirname $0`

executable=`basename $0 .t`

make $executable 2>&1 > /dev/null

exec ./$executable