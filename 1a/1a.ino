// 
// Oppgave 1 a)
//

// Static variables
const int buttonPin = 11;
const int ledPin = 7;

// Changable variables
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    digitalWrite(ledPin, LOW);
    }
  else{
    digitalWrite(ledPin, HIGH);
      }
  delay(10);

}
