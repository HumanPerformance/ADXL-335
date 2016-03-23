// Initialization Routine for ADXL 335
//
// Fluvio L. Lobo Fenoglietto


// Analog read pins
const int xPin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int xRead = analogRead(xPin);
  Serial.println(xRead);
  delay(100);
}
