# 路由监视器 RouterMonitor
Fork from https://gitee.com/dannylsl/routermonitor

## 优化说明
- 支持轮询监控多服务器
- 支持双路节点
- 简易配置

## TODO
- 硬盘状态监控轮询显示


## 使用方法

- 1.安装netdata

```bash
# docker一键部署：
  sudo docker run -d --name=netdata \
  -p 19999:19999 \
  -v netdataconfig:/etc/netdata \
  -v netdatalib:/var/lib/netdata \
  -v netdatacache:/var/cache/netdata \
  -v /etc/passwd:/host/etc/passwd:ro \
  -v /etc/group:/host/etc/group:ro \
  -v /proc:/host/proc:ro \
  -v /sys:/host/sys:ro \
  -v /etc/os-release:/host/etc/os-release:ro \
  --restart unless-stopped \
  --cap-add SYS_PTRACE \
  --security-opt apparmor=unconfined \
  netdata/netdata
```

- 2.配置信息

```cpp

//监控网口,netdata温度标识,核心数量,目标IP,目标端口,目标内存(G),第二节点netdata温度标识（双路节点才需要）
// Cf g_conf = {"net.br0","sensors.pch_lewisburg_virtual_0_temperature",1,"192.168.31.160",7777,384};
Cf g_conf = {"net.br0","sensors.coretemp_isa_0000_temperature",27,"192.168.31.160",7777,384,"sensors.coretemp_isa_0001_temperature"};
//轮询IP1
// Cf g_conf1 = {"net.br0","sensors.pch_lewisburg_virtual_0_temperature",1,"192.168.31.160",7777,384};
Cf g_conf1 = {"net.br0","sensors.coretemp_isa_0000_temperature",27,"192.168.31.160",7777,384,"sensors.coretemp_isa_0001_temperature"};


//轮询IP2
// Cf g_conf2 = {"net.enp1s0","sensors.acpitz_acpi_0_temperature",1,"192.168.31.52",7777,8};
Cf g_conf2 = {"net.wlp1s0","sensors.coretemp_isa_0000_temperature",7,"192.168.31.66",7777,8};


//config.h
#define SSID "HomeOfYuan"; //wifi名
#define PASSWORD "aaaabbbbccccdddd" //wifi密码;
#define SWITCHTIME 20 //轮询间隔时间(s)

```

- 3.编译上传
  - 见原文方法