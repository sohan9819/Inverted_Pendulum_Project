// Define Constants 

// Connections to A4988
const int dirPin = 2; //Direction 
const int stepPin = 3; // Step

// Motor steps per rotation
const int STEPS_PER_REV = 8400;

void setup() {
  // Setup the pins as Outputs
  pinMode(stepPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
}
void loop() {
  // Set motor direction clockwise
  digitalWrite(dirPin,LOW);

  // Spin motor one rotation slowly
  for(int x = 0 ; x < STEPS_PER_REV; x++){
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
  }

  // Pause for one second
  delay(1000);

  // Set motor direction counterclockwise
  digitalWrite(dirPin,HIGH);

  // Spin motor two rotations quickly
  for(int x =0; x < STEPS_PER_REV; x++){
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
  }

  // Pause for one second
  delay(1000);
}
