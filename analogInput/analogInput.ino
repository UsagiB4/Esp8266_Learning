const int analogPin = A0;  // esp has only one analog input mode, which is A0 on board.
int reader = 0;
void setup(){
  pinMode(analogPin, INPUT);
  Serial.begin(115200);
}

void loop(){
  reader = analogRead(analogPin);
  Serial.print("Sensor Value:");
  Serial.print(reader);
  delay(1000);
}
