int enablePin = 2;
int motorLogic1 = 3;
int motorLogic2 = 5;

void setup() {
  pinMode(enablePin, OUTPUT);
  pinMode(motorLogic1, OUTPUT);
  pinMode(motorLogic2, OUTPUT);
}

void loop() {
  digitalWrite(motorLogic1, HIGH);
  digitalWrite(motorLogic2, LOW);
  delay(15000);
  digitalWrite(motorLogic1, HIGH);
  digitalWrite(motorLogic2, HIGH);
  delay(2000);
  digitalWrite(motorLogic1, LOW);
  digitalWrite(motorLogic2, HIGH);
  delay(15000);
  digitalWrite(motorLogic1, LOW);
  digitalWrite(motorLogic2, LOW);
  delay(2000);
}
