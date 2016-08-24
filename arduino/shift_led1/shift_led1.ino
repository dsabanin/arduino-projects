#define SER 8
#define RCLK 9
#define SRCLK 10
#define SRCLR 11
#define OE 12

void setup() {
  pinMode(SER, OUTPUT);
  pinMode(OE, OUTPUT);
  pinMode(RCLK, OUTPUT);
  pinMode(SRCLK, OUTPUT);
  pinMode(SRCLR, OUTPUT);
  digitalWrite(OE, LOW);
  digitalWrite(SRCLR, LOW);
  digitalWrite(SRCLR, HIGH);
  Serial.begin(9600);
}

//int prev = LOW;
//void loop() {
//  if(prev == LOW) {
//    digitalWrite(SER, HIGH);
//    prev = HIGH;
//  } else {
//    digitalWrite(SER, LOW);
//    prev = LOW;
//  }
//  storeClock();
//  digitalWrite(SER, LOW);
//  shiftClock();
//  delay(500);
//}

void shiftNum(long value) {
  for(int i = 0; i <= 15; i++) {
    if((value & 1<<i) > 0) {
      digitalWrite(SER, HIGH);
    } else {
      digitalWrite(SER, LOW);
    }
    storeClock();
  }
  digitalWrite(SER, LOW);
  shiftClock();
}

void storeClock() {
  digitalWrite(SRCLK, HIGH);
  digitalWrite(SRCLK, LOW);
}

void shiftClock() {
  digitalWrite(RCLK, HIGH);
  digitalWrite(RCLK, LOW);
}

#define step 50

void loop() {
    shiftNum(0b1000000000000001);
    delay(step);
    shiftNum(0b0100000000000010);
    delay(step);
    shiftNum(0b0010000000000100);
    delay(step);
    shiftNum(0b0001000000001000);
    delay(step);
    shiftNum(0b0000100000010000);
    delay(step);
    shiftNum(0b0000010000100000);
    delay(step);
    shiftNum(0b0000001001000000);
    delay(step);
    shiftNum(0b0000000110000000);
    delay(step);
    shiftNum(0b0000001010000000);
    delay(step);
    shiftNum(0b0000010001000000);
    delay(step);
    shiftNum(0b0000100000100000);
    delay(step);
    shiftNum(0b0001000000010000);
    delay(step);
    shiftNum(0b0010000000001000);
    delay(step);
    shiftNum(0b0100000000000100);
    delay(step);
    shiftNum(0b1000000000000001);
    delay(step);
}

