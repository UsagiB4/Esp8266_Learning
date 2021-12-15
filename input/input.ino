// seting input and output pins
const int ledPin = 4; // led pin as D2 == GPIO-1
const int btnPin = 5; // button pin as D1 == GPIO-2

int btnState = 0;  // initial state of Button pin set to 0

void setup(){
  pinMode(btnPin, INPUT); // initializing button pin as Input
  pinMode(ledPin, OUTPUT);  // initializing LED pin as Output

}

void loop(){
  btnState = digitalRead(btnPin);  // This will read the value of Button pin

  if(btnState == HIGH){
    digitalWrite(ledPin, HIGH);  // if button is pressed(high), LED is on(high)
  } else{
    digitalWrite(ledPin, LOW); // if button is not pressed(low), LED is off(low)
  }
  
}
