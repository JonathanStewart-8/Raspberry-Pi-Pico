# Raspberry-Pi-Pico
Projects for Raspberry Pi Pico Showcasing Embedded System Applications

This project is for a blinking led which can be an output from any of the 0 through 28 genral-purpose input/output pins on the raspberry pi pico. A ground from a ground pin on the pico to the cathode leg of the led should be connected. A resistor from the output pin to the anode leg of the led should be connected. 

// defining General-purpose input/output pin on raspberry pi pico (0 through 28)
#define ledPin0 0
#define ledPin1 1
#define ledPin2 2
#define ledPin3 3
#define ledPin4 4
#define ledPin5 5
#define ledPin6 6
#define ledPin7 7
#define ledPin8 8



void setup() {
  // initialize digital pin LED as an output.
  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);

}


// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin0, HIGH); // turns the LED on (HIGH is the voltage level)
  digitalWrite(ledPin1, HIGH);  
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  delay(200);                       // wait delay
  
  digitalWrite(ledPin0, LOW);  // turns the LED off by making the voltage LOW
  digitalWrite(ledPin1, LOW);    
  digitalWrite(ledPin2, LOW); 
  digitalWrite(ledPin3, LOW); 
  digitalWrite(ledPin4, LOW); 
  digitalWrite(ledPin5, LOW); 
  digitalWrite(ledPin6, LOW); 
  digitalWrite(ledPin7, LOW); 
  digitalWrite(ledPin8, LOW); 
  delay(200);                // wait delay 
}
