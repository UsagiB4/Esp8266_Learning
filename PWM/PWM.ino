const int ledPin = 4;  // setting GPIO-4 (D2) as led pin
const int range = 1024;   // ESP default range is 256. here we're using 1024.
const int frqn = 20000;  // Default frequency for ESP is 1kHz. But you can use from 100Hz - 40KHz
void setup(){
  
}

void loop(){
    analogWriteFreq(frqn);  // overriding default(1KHz) frequency 
    analogWriteRange(range);  // overriding default(255) range
  for(int cycle = 0; cycle < range; cycle++){

    analogWrite(ledPin, cycle);
    delay(1);
  }
  for(int cycle = range; cycle > 0; cycle--){
    analogWrite(ledPin, cycle);
    delay(1);
  }
}
