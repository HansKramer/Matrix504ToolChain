cmd_/usr/local//arm-linux-gnueabi//sys-root/usr/include/linux/nfsd/.install := perl /home/ace.yang/toolchain/cross/targets/src/linux-2.6.29/scripts/headers_install.pl /home/ace.yang/toolchain/cross/targets/src/linux-2.6.29/include/linux/nfsd /usr/local//arm-linux-gnueabi//sys-root/usr/include/linux/nfsd arm const.h debug.h export.h nfsfh.h stats.h syscall.h; perl /home/ace.yang/toolchain/cross/targets/src/linux-2.6.29/scripts/headers_install.pl /home/ace.yang/toolchain/cross/targets/arm-linux-gnueabi/build/build-kernel-headers/include/linux/nfsd /usr/local//arm-linux-gnueabi//sys-root/usr/include/linux/nfsd arm ; touch /usr/local//arm-linux-gnueabi//sys-root/usr/include/linux/nfsd/.install
