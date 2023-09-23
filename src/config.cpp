#include "config.h"

//监控网口,netdata温度标识,核心数量,目标IP,目标端口,目标内存(G)
// Cf g_conf = {"net.br0","sensors.pch_lewisburg_virtual_0_temperature",1,"192.168.31.160",7777,384};
Cf g_conf = {"net.br0","sensors.coretemp_isa_0000_temperature",27,"192.168.31.160",7777,384};

//轮询IP1
// Cf g_conf1 = {"net.br0","sensors.pch_lewisburg_virtual_0_temperature",1,"192.168.31.160",7777,384};
Cf g_conf1 = {"net.br0","sensors.coretemp_isa_0000_temperature",27,"192.168.31.160",7777,384};


//轮询IP2
// Cf g_conf2 = {"net.enp1s0","sensors.acpitz_acpi_0_temperature",1,"192.168.31.52",7777,8};
Cf g_conf2 = {"net.wlp1s0","sensors.coretemp_isa_0000_temperature",7,"192.168.31.66",7777,8};