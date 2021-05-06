#ifndef HARE_H
#define HARE_H

#include "Mammal.h"


// Hare is derived from the class Mammal
class Hare : public Mammal
{
	protected:
	// the value that will be calculated and returned to main for the number of prey at a given time
	double numPrey;

	public:
	// calculate the number of prey at a given time t and returns this value to the main
	double lotkaVolterraPrey(double, double);
};

#endif
