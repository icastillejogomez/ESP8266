#include <SoftwareSerial.h>

SoftwareSerial esp8266(1, 3);

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  Serial.println("Started");

  // set the data rate for the SoftwareSerial port
  esp8266.begin(115200);
  esp8266.write("AT\r\n");
}

void loop() {
  if (esp8266.available()) {
    Serial.println("Salgo");
    Serial.write(esp8266.read());
  }
  if (Serial.available()) {
    Serial.println("Entro");
    esp8266.write(Serial.read());
  }
}
