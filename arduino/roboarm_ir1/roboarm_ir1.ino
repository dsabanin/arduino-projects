#include <IRremote.h>
#define DEBUG_LED 13
#define HEAD_LED 12

#define UP_SIGNAL 0x20DFA25D
#define DOWN_SIGNAL 0x20DF629D
#define LEFT_SIGNAL 0x20DFE21D
#define RIGHT_SIGNAL 0x20DF12ED
#define REPEAT_SIGNAL 0xffffffff
#define VUP_SIGNAL 0x20DF40BF
#define VDOWN_SIGNAL 0x20DFC03F
#define CUP_SIGNAL 0x20DF00FF
#define CDOWN_SIGNAL 0x20DF807F
#define MUTE_SIGNAL 0x20DF906F
#define HEAD_SIGNAL 0x20DF58A7
#define VISIO_SIGNAL 0x20DFB44B
#define MOVE_STEP 200

typedef enum {UP, DOWN} direction;

struct motor {
  int enable;
  int out1;
  int out2;
};

motor m1 = {A0, A1, A2};
motor m2 = {A3, A4, A5};
motor m3 = {2, 3, 4};
motor m4 = {5, 6, 7};
motor m5 = {8, 9, 10};
int headLed = LOW;

IRrecv irrecv(11);
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
  setupMotor(m3);
  setupMotor(m4);
  setupMotor(m5);
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
    case VUP_SIGNAL:
      simpleMove(m3, UP, MOVE_STEP);
      break;
    case VDOWN_SIGNAL:
      simpleMove(m3, DOWN, MOVE_STEP);
      break;
    case CUP_SIGNAL:
      simpleMove(m4, UP, MOVE_STEP);
      break;
    case CDOWN_SIGNAL:
      simpleMove(m4, DOWN, MOVE_STEP);
      break;
    case MUTE_SIGNAL:
      simpleMove(m5, UP, MOVE_STEP);
      break;
    case HEAD_SIGNAL:
      simpleMove(m5, DOWN, MOVE_STEP);
      break;
    case VISIO_SIGNAL:
      headLed = headLed == HIGH ? LOW : HIGH;
      break;
  }
}
void loop() {
  digitalWrite(HEAD_LED, headLed);
//  digitalWrite(DEBUG_LED, HIGH);
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
//  digitalWrite(DEBUG_LED, LOW);
}
