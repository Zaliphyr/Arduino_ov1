// 
// Oppgave 1 e)
//

// Static variables
const int buttonPin = 11;
const int button2Pin = 10;
const int ledPin = 7;

// Changable variables
int buttonState = 0;
int button2State = 0;
int pressedOnce = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  button2State = digitalRead(button2Pin);
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
  if (button2State == LOW){
   pressedOnce = 0; 
  }
}
