#include <IRremote.h>

#define MOTOR1_ENABLE 8
#define MOTOR1_OUT1 9
#define MOTOR1_OUT2 10
#define MOTOR2_ENABLE 11
#define MOTOR2_OUT1 12
#define MOTOR2_OUT2 13
#define DEBUG_LED 13

#define UP_SIGNAL 0x20DFA25D
#define DOWN_SIGNAL 0x20DF629D
#define LEFT_SIGNAL 0x20DFE21D
#define RIGHT_SIGNAL 0x20DF12ED
#define REPEAT_SIGNAL 0xffffffff

#define MOVE_STEP 200

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
  setupMotor(m1);
  setupMotor(m2);
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

unsigned long previous_signal = 0x0;

void process_signal(unsigned long cur_signal) {
  previous_signal = cur_signal;
  switch (cur_signal) {
    case UP_SIGNAL:
      simpleMove(m2, UP, MOVE_STEP);
      break;
    case DOWN_SIGNAL:
      simpleMove(m2, DOWN, MOVE_STEP);
      break;
    case LEFT_SIGNAL:
      simpleMove(m1, UP, MOVE_STEP);
      break;
    case RIGHT_SIGNAL:
      simpleMove(m1, DOWN, MOVE_STEP);
      break;
  }
}
void loop() {
  if (irrecv.decode(&signals)) {
    Serial.println(signals.value, HEX);
    if(previous_signal > 0 && signals.value == REPEAT_SIGNAL) {
      Serial.println(previous_signal, HEX);
      process_signal(previous_signal);
    } else {
      process_signal(signals.value);
    }
    irrecv.resume();
  }
  delay(20);
}
