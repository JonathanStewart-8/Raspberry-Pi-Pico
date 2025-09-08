#define ledPin 15

void setup() {
  // initializes digital pin LED as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever whether the button is pressed or not
void loop() {
  digitalWrite(ledPin, 1);   // turn the LED on by a high voltage level (pressing button)
  delay(200);                       // wait delay
  digitalWrite(ledPin, 0);    // turn the LED off by making the voltage LOW (button is not pressed)
  delay(200);                       // wait delay
}
