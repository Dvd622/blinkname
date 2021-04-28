// ------------
// Blink Name
// ------------

int led1 = D7; 

void setup() {

  // We are going to tell our device that  D7 (which we named led1) are going to be output
  // (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)


  pinMode(led1, OUTPUT);

}

void loop() {

  // Print name "David"
  // Dot is 1 unit, Dash is 3 units
  // 1 unit is 1 second (1000ms)
  
  // "D" (dash dot dot)
  digitalWrite(led1, HIGH); // Dash
  delay(3000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH); // Dot
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH); // Dot
  delay(1000);
  digitalWrite(led1, LOW);
  delay(3000);
  
  // "A" (dot dash)
  digitalWrite(led1, HIGH); // Dot
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH); // Dash
  delay(3000);
  digitalWrite(led1, LOW);
  delay(3000);
  
  // "V" (dot dot dot dash)
  digitalWrite(led1, HIGH); // Dot
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH); // Dot
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH); // Dot
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH); // Dash
  delay(3000);
  digitalWrite(led1, LOW);
  delay(3000);
  
  // "I" (dot dot)
  digitalWrite(led1, HIGH); // Dot
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH); // Dot
  delay(1000);
  digitalWrite(led1, LOW);
  delay(3000);
  
  // "D" (dash dot dot)
  digitalWrite(led1, HIGH); // Dash
  delay(3000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH); // Dot
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH); // Dot
  delay(1000);
  digitalWrite(led1, LOW);
  delay(3000);
  
  delay(4000);
  // And repeat!
}

