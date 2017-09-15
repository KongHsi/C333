#ifndef STATE_H
#define STATE_H

#include <iostream>

class State {
 public:
  // implementation
	 double position;
	 double velocity;
	 double acceleration;
	 double time;

	 State() {
		 position = 0.0;
		 velocity = 0.0;
		 acceleration = 0.0;
		 time = 0.0;
	 }

	 State(double pos, double vel, double acc, double time) {
		 position = pos;
		 velocity = vel;
		 acceleration = acc;
		 this->time = time;
	 }

	 void set(double pos, double vel, double acc, double time) {
		 position = pos;
		 velocity = vel;
		 acceleration = acc;
		 this->time = time;
	 }
};

#endif