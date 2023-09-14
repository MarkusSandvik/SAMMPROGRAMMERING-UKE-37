const int buttonPin = 2;

bool buttonState = false;

void uptdateButton(){
    buttonState = digitalRead(buttonPin);
    Serial.println(!buttonState);
}

void blinkeLed()
{
}
void setup()
{
    Serial.begin(9600);
    pinMode(buttonPin, INPUT);
}

void loop()
{
}