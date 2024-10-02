#ifndef SETUP_H
#define SETUP_H

#include <WiFi.h>
#include <pin.h>
#include <ESPmDNS.h>
#include <constants.h>

class Setup
{
public:
    static void Wifi();
    static void Motors();
    static void InitialTask();
};

#endif