#include "Fox.h"

// calculate dy/dt for the Lotka Volterra equation for Predators
double Fox :: lotkaVolterraPred(double x, double y)
{
	numPredators = (-birthRate * y) + (deathRate*x*y);
	return numPredators;
}
