// Motor control pins
//team powercut
const int enA = 5;  // Enable pin for motor A (PWM)
const int in1 = 6;   // Input 1 pin for motor A
const int in2 = 7;   // Input 2 pin for motor A

// Function to set motor speed based on desired speed setting
void setMotorSpeed(int speed) {
  // Map the desired speed range (0-255) to PWM duty cycle range (0-255)
  int pwmValue = map(speed, 0, 100, 0, 255);
  // Set the PWM duty cycle to control motor speed
  analogWrite(enA, pwmValue);
}

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // Example: set motor speed to 50% (adjust as needed)
  int desiredSpeed = 50;  // Speed setting in percentage
  setMotorSpeed(desiredSpeed);

 
}
