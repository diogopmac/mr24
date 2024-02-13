#include <sensor.h>

void setup() {
  sensorInit(5,6,7);
  Serial.begin(115200);
  Serial.println("working");
}

void loop() {
  Serial.println(readSensor());
  delay(1000);
}