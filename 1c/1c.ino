// 
// Oppgave 1 c)
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
  if (buttonState == LOW){
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }else{
    digitalWrite(ledPin, HIGH);  
  }

}
