#include "config.h"

//监控网口,netdata温度标识,目标IP,目标端口,目标内存(G)
Cf g_conf = {"net.br0","sensors.pch_lewisburg_virtual_0_temperature","192.168.31.160",7777,384};

//轮询IP1
Cf g_conf1 = {"net.br0","sensors.pch_lewisburg_virtual_0_temperature","192.168.31.160",7777,384};

//轮询IP2
Cf g_conf2 = {"net.enp1s0","sensors.acpitz_acpi_0_temperature","192.168.31.52",7777,8};