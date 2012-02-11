int enablePin = 2;
int motorLogic1 = 3;
int motorLogic2 = 5;

void setup() {
  pinMode(enablePin, OUTPUT);
//  pinMode(motorLogic1, OUTPUT);
//  pinMode(motorLogic2, OUTPUT);
}

void loop() {
  analogWrite(motorLogic1, 255);
  analogWrite(motorLogic2, 0);
  delay(10000);
  analogWrite(motorLogic1, 255);
  analogWrite(motorLogic2, 255);
  delay(2000);
  analogWrite(motorLogic1, 0);
  analogWrite(motorLogic2, 255);
  delay(10000);
  analogWrite(motorLogic1, 0);
  analogWrite(motorLogic2, 0);
  delay(2000);
}
