// 
// Oppgave 2 b)
//

// Static pins
const int potResPin = A0;


// changable values
int value = 0;

void setup() {
  // Start serial
  Serial.begin(9600);
}

void loop() {
  // Read value from pot
  value = analogRead(potResPin);
  
  // Print value to serial on new line
  Serial.println(value);
  
  // Delay a bit to help simulator
  delay(10);
}

/*
I serial monitor ser vi et verdisspenn på 0-1023, som er 1024 verdier, eller 2^10, dette er slik arduino 
tar inn verdier på analog siden, 0v er 0 og 5v er 1023

i) Vi leser 0
ii) Vi leser 1023

Fikk samme verdi siden pot meteret forandrer et signal som ligger mellom 0 og 5 volt
*/
