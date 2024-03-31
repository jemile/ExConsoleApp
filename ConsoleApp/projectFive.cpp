#include "includes.h"

/* THIS IS THE FIRST PRACTICE ASSIGNMENT */
// HYPOTENUSE CALCULATOR

// what we are using
using std::cout;
using std::cin;


int projectFive() 
{
	// clears console
	system("CLS");

	// variables defined
	double opposite; // a or b
	double adjacent; // a or b
	double hypotenuse; // c

	// gets user input
	cout << "this is a hypotenuse calculator" << "\n";

	cout << "please enter a integer for the opposite side: " << "\n";
	cin >> opposite;

	cout << "please enter a integer for the adjacent side: " << "\n";
	cin >> adjacent;

	// c^2 = a^2 + b^2
	// c = sqrt(a^2 + b^2)
	// you could combine this into one line but this it simplified
	opposite = pow((int)opposite, 2);
	adjacent = pow((int)adjacent, 2);
	hypotenuse = sqrt(opposite + adjacent);




	cout << "the (double) hypotenuse is: " << hypotenuse << "\n";
	cout << "the (integer) hypotenuse is: " << (int)hypotenuse << "\n";

	cin.get();
	cin.get();

	return 0;
}