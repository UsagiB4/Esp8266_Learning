const int sensorPin = 5;
const int ledPin = 2;
int stateValue = 0;

void setup(){
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
  
}

void loop(){
  stateValue = digitalRead(sensorPin);
  if (stateValue == LOW){
    digitalWrite(ledPin, LOW);
  }
  else{
    digitalWrite(ledPin, HIGH);
  }
}
