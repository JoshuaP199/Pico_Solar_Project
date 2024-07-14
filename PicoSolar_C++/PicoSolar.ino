// Motor 1
#define enA 0
#define in1 1
#define in2 2

// LED Indicators
#define red 14
#define green 15

// Photoresistor
#define pResistor 26

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

    // Setup for photoresistor
    // need one for ADC look at photoresistor in arduino tut

    // are PWM and analogWrite similar?
    // analogWrite(enA, 90)
}

void loop()
{
    Serial.print();
    Serial.print();
    if ()
}
