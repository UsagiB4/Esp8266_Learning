const int ledPin = 4;
const int btnPin = 5;

int btnState = 0;

void setup(){
  pinMode(btnPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop(){
  btnState = digitalRead(btnPin);

  if(btnState == HIGH){
    digitalWrite(ledPin, HIGH);
  } else{
    digitalWrite(ledPin, LOW);
  }
  
}
