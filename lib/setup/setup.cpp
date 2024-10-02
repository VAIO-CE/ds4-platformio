#include <setup.h>

void Setup::Wifi()
{
    WiFi.mode(WIFI_AP_STA);

    WiFi.softAP(SSID, PASSWORD);
    WiFi.softAPConfig(LOCAL_IP, GATEWAY, SUBNET);
    delay(100);
    Serial.println("WiFi Started!");
}

void Setup::Motors()
{
    pinMode(motorRightPin1, OUTPUT);
    pinMode(motorRightPin2, OUTPUT);
    pinMode(motorLeftPin1, OUTPUT);
    pinMode(motorLeftPin2, OUTPUT);

    Serial.println("Motor Pins Initialized!");
}

void Setup::InitialTask()
{
    // To Be Implemented
    Serial.println("Initial Task Passthrough!");
}