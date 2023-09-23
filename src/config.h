#ifndef __CONFIG_H
#define __CONFIG_H

#include <ESP8266WiFi.h>
#include <ArduinoJson.h>
#include <string>

#define SSID "HomeOfYuan"; //wifi名
#define PASSWORD "aaaabbbbccccdddd" //wifi密码;
#define SWITCHTIME 20 //轮询间隔时间(s)

struct Config
{
    String network;
    String temp;
    String netdata_ip;
    int netdate_port;
    int tot_memory;
};
typedef struct Config Cf;

extern Cf g_conf;
extern Cf g_conf1;
extern Cf g_conf2;

#endif