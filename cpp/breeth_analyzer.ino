#include "Adafruit_MCP3008.h"
#include "SPI.h"

Adafruit_MCP3008 adc;

void setup() {
  Serial.begin(115200);
  // Define pin connections.
  // bool Adafruit_MCP3008::begin(uint8_t sck, uint8_t mosi, uint8_t miso,uint8_t cs)
  adc.begin(18, 23, 19, 5);

  Serial.println(String("------------"));
  Serial.println(SCK);
  Serial.println(MOSI);
  Serial.println(MISO);
  Serial.println(SS);
}

void loop() {
  Serial.println(String("------------"));
  Serial.println("Value 1:" + String(adc.readADC(0)));
  Serial.println("Value 2:" + String(adc.readADC(1)));
  Serial.println("Value 3:" + String(adc.readADC(2)));
  Serial.println("Value 4:" + String(adc.readADC(3)));
  Serial.println("Value 5:" + String(adc.readADC(4)));
  Serial.println("Value 6:" + String(adc.readADC(5)));
  Serial.println("Value 7:" + String(adc.readADC(6)));
  Serial.println("Value 8:" + String(adc.readADC(7)));
  delay(2000);
}
