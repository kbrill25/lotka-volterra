#ifndef FOX_H
#define FOX_H

#include "Mammal.h"

// Fox is derived from the class Mammal
class Fox : public Mammal
{
	protected:
	// the value that will be calculated and returned to main for the number of predators at a given time
	double numPredators;

	public:
	// calculate the number of predators at a given time t and returns this value to the main
	double lotkaVolterraPred(double, double);
};

#endif
