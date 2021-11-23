// 
// Oppgave 3 a)
//

// Static pins
const int ledPin = 12;


// changable values
int time = 1000;

// Static values
const int startVal = 1000;
const int endVal = 5;
const int stepVal = 50;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Blink led
  digitalWrite(ledPin, HIGH);
  delay(time);
  digitalWrite(ledPin, LOW);
  delay(time);
  
  // Step down timer
  time -= stepVal;
  
  // If timer has reached end value, reset timer
  if (time < endVal){
    time = startVal;
  }
  
}
