int analogInPin = A0;

int sensorValue = 0;

int outputValue = 0;

int transistorPin = 3;

void setup()

{

Serial.begin(9600);

pinMode(8, OUTPUT);

pinMode(9, OUTPUT);

pinMode(transistorPin, OUTPUT);

}

void loop()

{

sensorValue = analogRead(analogInPin);

outputValue = map(sensorValue, 0, 1023, 0, 255);

analogWrite(transistorPin, outputValue);
}

