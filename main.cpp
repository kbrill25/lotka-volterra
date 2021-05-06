#include <iostream>
#include <fstream>
#include "Mammal.h"
#include "Hare.h"
#include "Fox.h"

using namespace std;

int main()
{
	// create objects for the hare and the fox
	Hare h;
	Fox f;

	// create file object
	ofstream outputFile;

	// discretize time
	double tf = 3.0;
	double ti = 0.0;
	int nsteps = 10000;
	double dt = (tf-ti)/nsteps;


	// set birth and death rates for the hare and the fox using OOP
	// hare
	h.setBirthRate(10);
	h.setDeathRate(.01);

	// fox
	f.setBirthRate(7);
	f.setDeathRate(.005);

	// initial conditions of IVP
	// initial values of the hare (x0) and of the fox (y0)
	double x0 = 750;
	double y0 = 500;

	// set xold and yold equal to x0 and y0 respectively to use euler's method
	double xold = x0;
	double yold = y0;

	// open the output file
	outputFile.open("predatorprey.txt");

	// output the initial conditions to the file
	outputFile << 0.0 << "," << xold << "," << yold << endl;

	// implement euler's method
	for(int i = 0; i < nsteps; i++)
	{
		// compute current time
		double time = i*dt;

		// compute update using OOP
		// compute new number of hares
		double xnew = dt * h.lotkaVolterraPrey(xold,yold) + xold;

		// compute new number of foxes
		double ynew = dt * f.lotkaVolterraPred(xold,yold) + yold;

		// update the new solution for the next iterate
		xold = xnew;
		xnew = xold;

		yold = ynew;
		ynew = yold;

		// write the prey and predator values at the given time to a file
		outputFile << time+dt << "," << xold << "," << yold << endl;
	}
	// close the file
	outputFile.close();

	return 0;
}
