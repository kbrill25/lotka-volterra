#include "Mammal.h"

// void function for setBirthRate
void Mammal :: setBirthRate(double b)
{
	birthRate = b;
}

// void function for setDeathRate
void Mammal :: setDeathRate(double d)
{
	deathRate = d;
}

// return the birth rate
double Mammal :: getBirthRate()
{
	return birthRate;
}

// return the death rate
double Mammal :: getDeathRate()
{
	return deathRate;
}

