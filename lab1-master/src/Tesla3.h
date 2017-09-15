#ifndef TESLA3_H
#define TESLA3_H

#include <iostream>
#include "State.h"
#include "physics.h"
#include "Car.h"

using namespace std;

class Tesla3 : public Car {
public:
	// constructor
	Tesla3() : Car("Tesla3", 1450, 750, 0.58) {}

};

#endif

