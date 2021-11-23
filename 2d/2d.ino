// 
// Oppgave 2 d)
//

// Static pins
const int potResPin = A0;


// changable values
int value = 0;
float volt = 0;
float res = 0;

void setup() {
  // Start serial
  Serial.begin(9600);
}

void loop() {
  // Read value from pot
  value = analogRead(potResPin);
  
  // Transforms value to volt
  volt = value * (5.0/1023.0);
  
  // Calculates the resistor
  res = (volt*250.0)/5.0;
  
  // Print value to serial on new line
  Serial.print("Voltage: ");
  Serial.print(volt);
  Serial.print(", Resistance: ");
  Serial.print(res);
  Serial.println("K Ohm");
  
  // Delay a bit to help simulator
  delay(10);
}

/*
Brukte formel for spenningsdeling
*/
