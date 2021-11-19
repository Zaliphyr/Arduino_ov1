// 
// Oppgave 2 a)
//

// Static pins
const int ledPin = 2;
const int photoResPin = A0;

// Static setpoints
const int set1 = 900;
const int set2 = 950;

// changable values
int value = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  value = analogRead(photoResPin);
  if (value < set1){
    digitalWrite(ledPin, LOW);
  } else if (value < set2){
    digitalWrite(ledPin, HIGH);
  } else{
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
}
