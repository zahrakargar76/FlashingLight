int led_pin = 13;
void setup() {
  // put your setup code here, to run once:
  //initialize digital pin 13 as an output.
  pinMode(led_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_pin, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  digitalWrite(led_pin, LOW); //turn the LED off by making the voltage LOW
  delay(1000);
}
