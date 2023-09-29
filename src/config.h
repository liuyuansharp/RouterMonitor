#ifndef __CONFIG_H
#define __CONFIG_H

#include <ESP8266WiFi.h>
#include <ArduinoJson.h>
#include <string>

#define SSID "HomeOfYuan"; //wifi名
#define PASSWORD "aaaabbbbccccdddd" //wifi密码;
#define SWITCHTIME 30 //轮询间隔时间(s)
#define SWITCHTIMECHIA 45 //chia显示间隔时间(s)

struct Config
{
    String network;
    String temp;
    int core;
    String netdata_ip;
    int netdate_port;
    int tot_memory;
    String temp1 = "";
};
typedef struct Config Cf;

extern Cf g_conf;
extern Cf g_conf1;
extern Cf g_conf2;

#endif