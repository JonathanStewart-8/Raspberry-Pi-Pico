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
  digitalWrite(ledPin0, HIGH); 
  digitalWrite(ledPin1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  delay(200);                       // wait for a second
  digitalWrite(ledPin0, LOW); 
  digitalWrite(ledPin1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(ledPin2, LOW); 
  digitalWrite(ledPin3, LOW); 
  digitalWrite(ledPin4, LOW); 
  digitalWrite(ledPin5, LOW); 
  digitalWrite(ledPin6, LOW); 
  digitalWrite(ledPin7, LOW); 
  digitalWrite(ledPin8, LOW); 
  delay(200); 
}





