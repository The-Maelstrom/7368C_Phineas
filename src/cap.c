#include "main.h"

void liftSet(int lift) {
  blrsMotorSet(LIFT_LEFT, lift, false);
  blrsMotorSet(LIFT_RIGHT, lift, false);
}

void liftInit() {
  blrsMotorInit(LIFT_LEFT, false, 0.5f, NULL);
  blrsMotorInit(LIFT_RIGHT, true, 0.5f, NULL);
}
