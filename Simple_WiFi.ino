#include <SPI.h>
#include <WiFi101.h>

char ssid[] = "pubnub-2015-fall-2";
char pass[] = "4odCf2ov5oXpBnRb";
int status = WL_IDLE_STATUS;

void setup() {
    Serial.begin(9600);
    while (status !=WL_CONNECTED) {
        Serial.println("Attempting to connect to network…");
        status = WiFi.begin(ssid, pass);
        delay(10000);
    }
    Serial.print("SSID:");
    Serial.println(WiFi.SSID());
}

void loop() {
  Serial.println("Congrats! You're connected.");
  delay(5000);
}
