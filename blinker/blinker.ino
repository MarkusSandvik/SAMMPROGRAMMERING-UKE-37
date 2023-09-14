const int LED_PIN = 13;

const int buttonPin = 2;

bool buttonState = false;

void uptdateButton(){
    buttonState = digitalRead(buttonPin);
    Serial.println(!buttonState);
}

void blinkeLed()
{
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}
void setup()
{
    Serial.begin(9600);
    pinMode(buttonPin, INPUT);
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    updateButton();
    blinkLed();
    Serial.println(buttonState);
}