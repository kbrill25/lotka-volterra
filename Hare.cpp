#include "Hare.h"

// calculate dx/dt
double Hare :: lotkaVolterraPrey(double x, double y)
{
	numPrey = (birthRate * x) - (deathRate * x * y);
	return numPrey;
}
