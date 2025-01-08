#ifndef WEB_H
#define WEB_H

#include <Arduino.h>

extern unsigned long rebootTime;
extern bool isRebootPending;

void setupWebServer();
void checkReboot();
String readFileFromSPIFFS(const char* path);

#endif