#include "Car.h"
#include "physics.h"

using namespace std;
using namespace physics;

const double air_density = 1.225;

// implementation details...
Car::Car(string model, double mass, double engine_force, double drag_area){
	Car::model = model;
	Car::mass = mass;
	Car::engine_force = engine_force;
	Car::drag_area = drag_area;

	Car::isAccelerating = false;
	Car::state = State();
}

string Car::getModel() {
	return model;
}
double Car::getMass() {
	return mass;
}
void Car::accelerate(bool on) {
	Car::isAccelerating = true;
}
void Car::drive(double dt) {
	double position = state.position;
	double velocity = state.velocity;
	double acceleration = state.acceleration;
	double time = state.time;

	position = compute_position(position, velocity, dt);
	velocity = compute_velocity(velocity, acceleration, dt);
	double fd = 0.5 * air_density * drag_area * velocity * velocity;
	acceleration = isAccelerating ? compute_acceleration(engine_force - fd, mass) : 0;
	dt += dt;

	state.position = position;
	state.velocity = velocity;
	state.acceleration = acceleration;
	state.time = time;
}
State Car::getState() {
	return state;
}