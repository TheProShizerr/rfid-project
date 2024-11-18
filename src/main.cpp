#include <Arduino.h>
#include <wifi_connect.h>
#include <wifi_connect_pass.h>

void setup() {
    Serial.begin(115200);
    connectToWiFi(SECRET_SSID, SECRET_PASS);
}

void loop() {
    
if(!isWiFiConnected()) return;

Serial.println("Mamy wifi!");

 delay(500);
}