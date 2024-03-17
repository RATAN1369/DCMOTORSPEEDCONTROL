// Motor control pins
const int enA = 9;  // Enable pin for motor A (PWM)
const int in1 = 8;   // Input 1 pin for motor A
const int in2 = 7;   // Input 2 pin for motor A

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // Set motor direction and speed (clockwise rotation)
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 200);  // Adjust PWM value for desired speed
  
  delay(2000);  // Motor runs clockwise for 2 seconds
  
  // Set motor direction and speed (counter-clockwise rotation)
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, 150);  // Adjust PWM value for desired speed
  
  delay(2000);  // Motor runs counter-clockwise for 2 seconds
}
