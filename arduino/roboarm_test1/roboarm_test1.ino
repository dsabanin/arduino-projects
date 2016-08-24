#define TKD2 7

#include <IRremote.h>

#define MOTOR1_ENABLE 8
#define MOTOR1_OUT1 9
#define MOTOR1_OUT2 10
#define MOTOR2_ENABLE 11
#define MOTOR2_OUT1 12
#define MOTOR2_OUT2 13
#define DEBUG_LED 13

typedef enum {UP, DOWN} direction;

struct motor {
  int enable;
  int out1;
  int out2;
};

motor m1 = {8, 9, 10};
motor m2 = {11, 12, 13};

IRrecv irrecv(7);
decode_results signals;

void setupMotor(motor m) {
  pinMode(m.enable, OUTPUT);
  pinMode(m.out1, OUTPUT);
  pinMode(m.out2, OUTPUT);
  digitalWrite(m.enable, LOW);
  digitalWrite(m.out1, LOW);
  digitalWrite(m.out2, LOW);
};

void setup() {
//  setupMotor(m1);
//  setupMotor(m2);
  Serial.begin(9600);
  pinMode(DEBUG_LED, OUTPUT);
  irrecv.enableIRIn();
}

void simpleMove(motor m, direction dir , int time) {
  digitalWrite(m.enable, HIGH);
  if (dir == UP) {
    digitalWrite(m.out1, HIGH);
    digitalWrite(m.out2, LOW);
  } else {
    digitalWrite(m.out1, LOW);
    digitalWrite(m.out2, HIGH);
  }
  delay(time);
  digitalWrite(m.enable, LOW);
}

void loop() {
  if(irrecv.decode(&signals)) {
    Serial.println(signals.value, HEX);
    irrecv.resume();
  }
  //  Serial.println(digitalRead(7));
  //  simpleMove(m1, UP, 1000);
  //  simpleMove(m1, DOWN, 1000);
  //  simpleMove(m2, DOWN, 1000);
  //  simpleMove(m1, UP, 1000);
  //  delay(1000000);
}
