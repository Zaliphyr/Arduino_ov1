// 
// Oppgave 3 b)
//

// Static pins
const int ledPin = 12;


// Static values
const int startVal = 1000;
const int endVal = 5;
const int stepVal = 50;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int time = 1000;
  while (time > endVal){
    digitalWrite(ledPin, HIGH);
    delay(time);
    digitalWrite(ledPin, LOW);
    delay(time);
    time -= stepVal;
  }
  
}
