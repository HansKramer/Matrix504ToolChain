cmd_/usr/local//arm-linux-gnueabi//sys-root/usr/include/linux/tc_act/.install := perl /home/ace.yang/toolchain/cross/targets/src/linux-2.6.29/scripts/headers_install.pl /home/ace.yang/toolchain/cross/targets/src/linux-2.6.29/include/linux/tc_act /usr/local//arm-linux-gnueabi//sys-root/usr/include/linux/tc_act arm tc_gact.h tc_ipt.h tc_mirred.h tc_nat.h tc_pedit.h tc_skbedit.h; perl /home/ace.yang/toolchain/cross/targets/src/linux-2.6.29/scripts/headers_install.pl /home/ace.yang/toolchain/cross/targets/arm-linux-gnueabi/build/build-kernel-headers/include/linux/tc_act /usr/local//arm-linux-gnueabi//sys-root/usr/include/linux/tc_act arm ; touch /usr/local//arm-linux-gnueabi//sys-root/usr/include/linux/tc_act/.install
