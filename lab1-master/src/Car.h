#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
#include "State.h"
#include "physics.h"

using namespace std;

class Car {
 private:
  // member variables
	 string model;

 protected:
	 State state;
	 double drag_area;
	 double mass;
	 double engine_force;
	 bool isAccelerating;

 public:
  // constructor
  Car(string model, double mass, double engine_force, double drag_area);
  
  string getModel();    // gets the model name
  double getMass();          // mass of the car
  void accelerate(bool on);  // turn the accelerator on/off
  virtual void drive(double dt);     // drive the car for an amount of time dt
  State getState();          // returns the car's state
};

#endif