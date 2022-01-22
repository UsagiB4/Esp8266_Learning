#define timeSec 10

const int led = 2;
const int sensor = 5;

unsigned long timeBegin = millis();
unsigned long lastTrigger = 0;
boolean startTimer = false;


ICACHE_RAM_ATTR void detectsMovement(){
  Serial.println("Someone is here");
  digitalWrite(led, LOW);
  startTimer = true;
  lastTrigger = millis();
}


void setup(){
  Serial.begin(115200);

  pinMode(sensor,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(sensor),detectsMovement, RISING);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  
}

void loop(){
  timeBegin = millis();
  if(startTimer && (timeBegin -lastTrigger > (timeSec*1000))){
    Serial.println("Gone");
    digitalWrite(led, HIGH);
    startTimer = false;
  }
}
