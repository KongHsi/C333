#ifndef MAZDA3_H
#define MAZDA3_H

#include <iostream>
#include "State.h"
#include "physics.h"
#include "Car.h"

using namespace std;

class Mazda3 : public Car {
public:
	// constructor
	Mazda3() : Car("Mazda3", 1600, 790, 0.61) {}

};

#endif
