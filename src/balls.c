#include "main.h"

void funnelSet(int funnel) {
  motorSet(FUNNEL, funnel);
}

void rackSet(int rack) {
  blrsMotorSet(RACK_RIGHT, rack, false);
  blrsMotorSet(RACK_LEFT, rack, false);
}

void ballsInit(){
  blrsMotorInit(RACK_RIGHT, true, 0.5f, NULL);
  blrsMotorInit(RACK_LEFT, false, 0.5f, NULL);
  blrsMotorInit(FUNNEL, true, 0.5f, NULL);
}
