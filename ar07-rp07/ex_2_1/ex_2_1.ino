int number = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
 Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  Serial.print(number);   // turn the LED on (HIGH is the voltage level)
  Serial.println("sec");    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  number++;
}
