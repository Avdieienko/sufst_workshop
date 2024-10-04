#include <stdio.h>
#include "../Inc/CarSensors.h"
#include "../Inc/drive.h"

int drive(CarSensors* carSensorsPtr) {
  carSensorsPtr->pedals.acceleration += 6.0;
  carSensorsPtr->control.steeringAngle += 30.0;
  return 0;
}