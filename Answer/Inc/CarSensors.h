// ----------------------------------------------
// ----------------EXAMPLE ANSWER----------------
// ----------------------------------------------
#ifndef CARSENSORS_H
#define CARSENSORS_H

#include "ControlSensor.h"
#include "PedalsSensor.h"

typedef struct
{
  PedalsSensor pedals;
  ControlSensor control;
} CarSensors;

#endif