#ifndef PRIUS_H
#define PRIUS_H

#include <iostream>
#include "State.h"
#include "physics.h"
#include "Car.h"

using namespace std;

class Prius : public Car {
public:
	// constructor
	Prius() : Car("Toyota Prius", 1450, 750, 0.58) {}

};

#endif
