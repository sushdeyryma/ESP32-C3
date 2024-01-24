const int waterLevelPin = 1;  // Analog pin for water level sensor

void setup() {
  Serial.begin(115200);
}

void loop() {
  int waterLevel = analogRead(waterLevelPin);
  Serial.print("Water Level: ");
  Serial.println(waterLevel);

  delay(1000);  // Delay for readability, adjust as needed
}