#ifndef HERBIE_H
#define HERBIE_H

#include <iostream>
#include "State.h"
#include "physics.h"
#include "Car.h"

using namespace physics;
using namespace std;
const double air_density = 1.225;

class Herbie : public Car {
public:
	// constructor
	Herbie() : Car("Herbie", 1450, 750, 0.58) {}

	void drive(double dt) {
		double position = state.position;
		double velocity = state.velocity;
		double acceleration = state.acceleration;
		double time = state.time;

		position = compute_position(position, velocity, dt);
		velocity = compute_velocity(velocity, acceleration, dt);
		acceleration = isAccelerating ? compute_acceleration(engine_force, mass) : 0;
		dt += dt;

		state.position = position;
		state.velocity = velocity;
		state.acceleration = acceleration;
		state.time = time;
	}
};

#endif
