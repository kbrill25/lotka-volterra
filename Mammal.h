#ifndef MAMMAL_H
#define MAMMAL_H

// Mammal is the base class
class Mammal
{
	public:
	// constant components of the Lotka-Volterra Equations
	double birthRate;
	double deathRate;

	// setter functions to allow user to set the birth and death rates
	void setBirthRate(double);
	void setDeathRate(double);

	// getter functions to allow user to get the birth and death rates
	double getBirthRate();
	double getDeathRate();
};
#endif
