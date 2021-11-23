// 
// Oppgave 2 c)
//

// Static pins
const int potResPin = A0;


// changable values
int value = 0;
float volt = 0;

void setup() {
  // Start serial
  Serial.begin(9600);
}

void loop() {
  // Read value from pot
  value = analogRead(potResPin);
  
  // Transform value to volt
  volt = value * (5.0/1023.0);
  
  // Print value to serial on new line
  Serial.println(volt);
  
  // Delay a bit to help simulator
  delay(10);
}

/*
Et potmeter varierer en motstand mellom de ytre pinene og midtpinnen, i dette tilfelle så måler
vi spenningsfallet over motstanden som legges mellom den midterste pinnen og jord
*/
