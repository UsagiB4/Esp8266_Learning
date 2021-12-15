const int analogPin = A0;
int reader = 0;
void setup(){
  pinMode(analogPin, INPUT);
  Serial.begin(115200);
}

void loop(){
  analogWriteRange(255);
  reader = analogRead(analogPin);
  Serial.print("Sensor Value:");
  Serial.print(reader);
  delay(1000);
}
