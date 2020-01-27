#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <time.h>

void Json(String Dados, String Token);
void SNTP();
String send(String Dados, String Token);