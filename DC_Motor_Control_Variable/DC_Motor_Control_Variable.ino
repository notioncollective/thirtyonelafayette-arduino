// this enables/disables operation
int enablePin = 2;

// motor logic pins control the motor
int motorLogic1 = 3;
int motorLogic2 = 5;

// input potentiometer
int controlPin = A0;

// output led
int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(enablePin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  // vlue is between 0 and 1023
  int inputValue = analogRead(controlPin);
  int pwmValue = 0;
  //Serial.println(inputValue);

  // 0-412 GO DOWN
  if(inputValue < 413) {
    Serial.println("DOWN");
    digitalWrite(ledPin, HIGH);
    pwmValue = 255 - map(inputValue, 0, 412, 0, 255);
    Serial.println(pwmValue);
    analogWrite(motorLogic1, pwmValue);
    analogWrite(motorLogic2, 0);
  }
  // 413-612 STOP
  else if (413 <= inputValue && inputValue < 613) {
    Serial.println("STOP");
    digitalWrite(ledPin, LOW);
    analogWrite(motorLogic1, 0);
    analogWrite(motorLogic2, 0);
  }
  // 613-1023 UP
  else {
    Serial.println("UP");
    digitalWrite(ledPin, HIGH);
    pwmValue = map(inputValue, 613, 1023, 0, 255);
    Serial.println(pwmValue);
    analogWrite(motorLogic1, 0);
    analogWrite(motorLogic2, pwmValue);
  }
  
  
//  analogWrite(motorLogic1, 255);
//  analogWrite(motorLogic2, 0);
//  delay(10000);
//  analogWrite(motorLogic1, 255);
//  analogWrite(motorLogic2, 255);
//  delay(2000);
//  analogWrite(motorLogic1, 0);
//  analogWrite(motorLogic2, 255);
//  delay(10000);
//  analogWrite(motorLogic1, 0);
//  analogWrite(motorLogic2, 0);
//  delay(2000);
}
