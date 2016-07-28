#include <SPI.h>
#include <WiFi101.h>
#include <FlashStorage.h>

FlashStorage(storage, String);

void setup() {
  delay(1000);
  Serial.begin(9600);
  Serial.print("Flash Storage: ");
  Serial.println(my_flash_store.read());
}

void loop() {
  if (storage.read() == "") {
    storage.write("This is now in storage.");
  }

}
