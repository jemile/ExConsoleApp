#include "includes.h"
#include "functions.h"

using std::cout;
using std::cin;

// this is a calculator app that will use switches to determine what the user wants

int numberOne;
int numberTwo;
int mathType;
int started = false;

double finalAmount = 0.00;

// this function will return the final value depending on which arithmetic operator they want to use
double math(int numOne, int numTwo, int type) {
	do {
		started = true;
		switch (type) {
			case 1:
				return numOne + numTwo;
				break;
			case 2: 
				return numOne - numTwo;
				break;
			case 3:
				return numOne / numTwo;
				break;
			case 4:
				return numOne * numTwo;
				break;
			case 5:
				return sqrt(numOne);
				break;
		}
	} while (!started);
}

int projectSeven() 
{
	// clears console
	system("CLS");

	cout << "This is a math calculator\n";

	cout << "What is number one?\n";
	cin >> numberOne;
	cout << "What is number two?\n";
	cin >> numberTwo;

	// Make's sure that the user puts an actual arithmetic operator
	do {
		started = true;
		cout << "What type of math do you want to do?: \n";
		cout << "1: Addition, 2: Subtraction, 3: Division, 4: Multiplication, 5: Squareroot of Number One\n";
		cin >> mathType;
		if (mathType > 5 || mathType < 1)
		{
			started = false;
		}
	} while (!started);

	started = false;
	finalAmount = math(numberOne, numberTwo, mathType);

	cout << "The final float/double is: " << finalAmount << "\n";
	cout << "The final integer is: " << (int)finalAmount << "\n";

	cin.get();



	return projectNine();
}