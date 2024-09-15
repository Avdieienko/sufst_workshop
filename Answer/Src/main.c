// ----------------------------------------------
// ----------------EXAMPLE ANSWER----------------
// ----------------------------------------------


#include <stdio.h>
#include "../Inc/CarSensors.h"
#include "../Inc/drive.h"

int main() {
  CarSensors carSensors;

  carSensors.pedals = (PedalsSensor) {0.0, 0.0};
  carSensors.control = (ControlSensor) {90.0};

  printf("Sensors before: Acceleration = %.2f, Brake = %.2f\n", carSensors.pedals.acceleration, carSensors.pedals.brake);

  drive(carSensors);

  return 0;
}