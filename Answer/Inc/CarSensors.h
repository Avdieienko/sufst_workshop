// ----------------------------------------------
// ----------------EXAMPLE ANSWER----------------
// ----------------------------------------------
#include "ControlSensor.h"
#include "PedalsSensor.h"

typedef struct {
  PedalsSensor pedals;
  ControlSensor control;
} CarSensors;