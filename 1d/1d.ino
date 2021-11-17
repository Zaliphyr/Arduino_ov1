// 
// Oppgave 1 d)
//

// Static variables
const int buttonPin = 11;
const int ledPin = 7;

// Changable variables
int buttonState = 0;
int pressedOnce = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW){
    pressedOnce = 1;
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }else if (pressedOnce == LOW){
    digitalWrite(ledPin, HIGH);  
  }else{
    digitalWrite(ledPin, LOW);
  }

}
