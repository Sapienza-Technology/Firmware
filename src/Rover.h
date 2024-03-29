#ifndef ROVER_H
#define ROVER_H

#include <AccelDC.h>
#include <Arduino.h>

#include "Environment.h"
#include "config.h"

class Rover {
   public:
    Rover(Environment *environment);

    void begin();

    void setMotorsEnabled(bool enabled);

    void setMotorsConfig(float minSpeed, float acceleration);

    void setTargetSpeed(float speed);

    void moveForMillis(unsigned long t);

    void setBackwards(bool backwards);

    void brake();

    bool run();

    double getTargetHeading();

   private:
    Environment *env;
    AccelDC *leftMot;
    // AccelDC *rightMot;
};

#endif