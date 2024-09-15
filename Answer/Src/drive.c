#include <stdio.h>
#include "../Inc/CarSensors.h"

int drive(CarSensors carSensors) {
  carSensors.pedals.acceleration += 6.0;
  carSensors.control.steeringAngle += 30.0;
  printf("Sensors after: Acceleration = %.2f, Brake = %.2f, Steering Angle = %.2f\n", carSensors.pedals.acceleration, carSensors.pedals.brake, carSensors.control.steeringAngle);
  return 0;
}