int pin = 2;
void setup() {
  // initializing GPIO 2 as an output pin
  pinMode(pin, OUTPUT);

}

void loop() {
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);

}
