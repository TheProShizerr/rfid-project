#include <WiFiS3.h> 
#include <R4HttpClient.h> 
#include <Arduino.h>
#include <wifi_connect.h>

void connectToWiFi(char *SSID, char *PASS) {
  WiFi.begin(SSID, PASS);

  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Trwa nawiązywanie połączenia");
  }

  Serial.println("Połączono z WiFi");
}

bool isWiFiConnected() {
  return WiFi.status() == WL_CONNECTED;
}


