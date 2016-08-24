const int leftEye = A0;
const int rightEye = A1;
const int led = 13;
const int t = 60;
int strength = 150;
const int lowFreq = 8;
const int highFreq = 13;
const int lowDelay = (1000.0 / lowFreq) / 2;
const int highDelay = (1000.0 / highFreq) / 2;

void setup() {
  pinMode(leftEye, OUTPUT);
  pinMode(rightEye, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  for(int i=lowDelay; i > highDelay; i--) {
    digitalWrite(led, HIGH);
    analogWrite(leftEye, strength);
    analogWrite(rightEye, strength);
    delay(i);
    analogWrite(leftEye, 0);
    analogWrite(rightEye, 0);
    digitalWrite(led, LOW);
    delay(i);
  }
  for(int i=highDelay; i < lowDelay; i++) {
    digitalWrite(led, HIGH);
    analogWrite(leftEye, strength);
    analogWrite(rightEye, strength);
    delay(i);
    analogWrite(leftEye, 0);
    analogWrite(rightEye, 0);
    digitalWrite(led, LOW);
    delay(i);
  }
}
