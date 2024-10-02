#ifndef CONSTANTS_H
#define CONSTANTS_H

// Timeout Signal in Milliseconds
#define SIGNAL_TIMEOUT 500

// Speed of DC Motors
#define MAX_SPEED 190
#define MAX_SPEED_OFFSET 20

// FreeRTOS Task
#define STACK_SIZE 2048

// Local DNS
static const char *HOST = "vaio";

// ESP32 SSID & Password
static const char *SSID = "VAIO";
static const char *PASSWORD = "skibiditoilet123";

// IP Address Details
static const IPAddress LOCAL_IP(192, 168, 1, 1);
static const IPAddress GATEWAY(192, 168, 1, 1);
static const IPAddress SUBNET(255, 255, 255, 0);

#endif