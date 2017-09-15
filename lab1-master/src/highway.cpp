#include <vector>
#include <iostream>
#include "Car.h"
#include "Prius.h"
#include "Herbie.h"

int main() {

  // Your code here
	Car* cars[100];
	for (int i = 0; i<100; ++i) {
		if (i % 2 == 0)
			cars[i] = new Prius();   // fixed-size array
		else
			cars[i] = new Herbie();
		cars[i]->accelerate(true);
	}

	double dt = 0.01;
	for (double t = 0; t <= 60; t += dt) {
		for (int i = 0; i < 100; i++) {
			cars[i]->drive(dt);
		}
	}

	for (int i = 0; i < 100; i++) {
		std:cout << cars[i]->getState().position << std::endl;
	}

	for (int i = 0; i < 100; i++) {
		delete cars[i];
	}

  while (1);
  return 0;
}
