
const int LED_PIN = 13;
const int MOTOR_STEP_PIN = 5;
const int MOTOR_DIRECTION_PIN = 4;
//const int STOP_BUTTON_PINTOP = 9;
//const int STOP_BUTTON_PINTOP = 10;


//
// create the stepper motor object
//
//SpeedyStepper stepper;

const int MOTOR_ENABLE = 1;

void setup() 
{
  pinMode(LED_PIN, OUTPUT);   
  //pinMode(STOP_BUTTON_PINTOP, INPUT_PULLUP);
  //pinMode(STOP_BUTTON_PINBOTTOM, INPUT_PULLUP);
  pinMode(MOTOR_DIRECTION_PIN, OUTPUT);
  pinMode(MOTOR_STEP_PIN, OUTPUT);
  digitalWrite(MOTOR_DIRECTION_PIN, LOW);
  pinMode(MOTOR_ENABLE, OUTPUT);
  digitalWrite(MOTOR_ENABLE, LOW);
}



void loop() 
{
  for ( int x = 0 ; x < 2000 ; x++) {
  digitalWrite(MOTOR_DIRECTION_PIN, LOW);
  digitalWrite(LED_PIN, LOW);
  digitalWrite(MOTOR_STEP_PIN, LOW);
  delayMicroseconds(500);
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(MOTOR_STEP_PIN, HIGH);
  delayMicroseconds(500);
  }
  for ( int x = 0 ; x < 2000 ; x++) {
  digitalWrite(MOTOR_DIRECTION_PIN, HIGH);
  digitalWrite(LED_PIN, LOW);
  digitalWrite(MOTOR_STEP_PIN, LOW);
  delayMicroseconds(500);
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(MOTOR_STEP_PIN, HIGH);
  delayMicroseconds(500);
  }

  
}
