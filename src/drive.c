/*
Drive Code
*/
#include "main.h"

void driveSet (int left, int right)
{
  blrsMotorSet(DRIVE_LEFT, left, false);
  blrsMotorSet(DRIVE_RIGHT, right, false);
}

void driveInit() {
  // leftEncoder = encoderInit(ENCODER_LEFT_TOP, ENCODER_LEFT_BOTTOM, true);
  // rightEncoder = encoderInit(ENCODER_RIGHT_TOP, ENCODER_RIGHT_BOTTOM, true);
  blrsMotorInit(DRIVE_LEFT, false , 0.5f, NULL);
  blrsMotorInit(DRIVE_RIGHT, false, 0.5f, NULL);
  // imeInitializeAll();
}
