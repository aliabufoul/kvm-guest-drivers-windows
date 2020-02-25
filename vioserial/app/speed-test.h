#pragma once
/*
typical qemu command-line
for vsock:
-device vhost-vsock-pci,id=vhost-vsock-pci0,guest-cid=3,bus=pci.0,addr=0x4
for serial:
-chardev socket,path=/tmp/foo,id=foo -device virtserialport,bus=virtio-serial0.0,nr=2,chardev=foo,id=test0,name=test0
*/
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <fcntl.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>
#include <linux/vm_sockets.h>
#include <linux/un.h>

#ifdef __cplusplus
extern "C" {
#endif
    int speed_test(int client, int vsock, int unixsock);
#ifdef __cplusplus
}
#endif
