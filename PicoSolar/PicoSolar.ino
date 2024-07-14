// Motor 1
#define enA (0u)
#define in1 (1u)
#define in2 (2u)

// LED Indicators
#define red (14u)
#define green (15u)
#define obLED (25u)

// Photoresistor
#define pResistor (26u)

int value;

void setup()
{
  // Setup for Serial Monitor
  Serial.begin(9600);

  // Setup for motor 1
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  // Setup for LED indicators
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(obLED, OUTPUT);

  // Setup for photoresistor
  //pinMode(pResistor, INPUT);

  // are PWM and analogWrite similar?
  // analogWrite(enA, 90)
}

void loop()
{
  //value = analogRead(pResistor);
  //Serial.print(value);
  digitalWrite(obLED, HIGH);
  Serial.print("HIGH");
  delay(2);
  Serial.print("LOW");
  digitalWrite(obLED, LOW);
  delay(2);
}















