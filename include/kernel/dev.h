/*
** Copyright 2001-2002, Travis Geiselbrecht. All rights reserved.
** Distributed under the terms of the NewOS License.
*/
#ifndef _KERNEL_DEV_H
#define _KERNEL_DEV_H

#include <kernel/kernel.h>
#include <boot/stage2.h>

int dev_init(kernel_args *ka);
int dev_scan_drivers(kernel_args *ka);
image_id dev_load_driver(const char *name);

#endif

