int motor1 = 2;
int motor2 = 3;
int motor3 = 4;
int motor4 = 5;
int motor5 = 6;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor3, OUTPUT);
  pinMode(motor4, OUTPUT);
  pinMode(motor5, OUTPUT);
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor3, HIGH);
  digitalWrite(motor4, HIGH);
  digitalWrite(motor5, HIGH);
}

void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  digitalWrite(motor3, LOW);
  digitalWrite(motor4, LOW);
  digitalWrite(motor5, LOW);
  delay(1000);
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
  digitalWrite(motor3, HIGH);
  digitalWrite(motor4, HIGH);
  digitalWrite(motor5, HIGH);
  digitalWrite(13, LOW);
  delay(1000);
}

