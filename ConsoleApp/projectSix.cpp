#include "includes.h"
#include "functions.h"

using std::cin;
using std::cout;

/* switches */
int projectSix()
{
	// clears console
	system("CLS");


	/* first example */

	int month;
	bool done = false;
	// https://cplusplus.com/forum/beginner/47492/
	// how to do a switch statement without ending it
	do {
		cout << "Enter what month it is (1-12)\n";
		cin >> month;

		// trying to optimize the code by not putting it in every case
		done = true;


		// switches through the cases of month to find which one the user inputed
		switch (month)
		{
			// month = 1
		case 1:
			cout << "It is January\n";
			break;
		case 2:
			cout << "It is Feburary\n";
			break;
		case 3:
			cout << "It is March\n";
			break;
		case 4:
			cout << "It is April\n";
			break;
		case 5:
			cout << "It is May\n";
			break;
		case 6:
			cout << "It is June\n";
			break;
		case 7:
			cout << "It is July\n";
			break;
		case 8:
			cout << "It is August\n";
			break;
		case 9:
			cout << "It is September\n";
			break;
		case 10:
			cout << "It is October\n";
			break;
		case 11:
			cout << "It is November\n";
			break;
		case 12:
			cout << "It is December\n";
			break;
		// if there are no matching cases
		default:
			// sets done to false in order to repeat the function
			done = false;
			cout << "Please enter in only numbers (1-12)\n";
			break;
		}
	// doing this statement until the compiler tells us we inputed a correct number
	} while (!done);

	/* second example */

	// ex: A, B, C, D, F
	char grade;
	// reusing the old variable
	done = false;
	
	do {
		cout << "What letter grade?: ";
		cin >> grade;
		done = true;

		switch (grade) {
			case 'A':
				cout << "Excellent";
				break;
			case 'B':
				cout << "Nice";
				break;
			case 'C':
				cout << "You did okay";
				break;
			case 'D':
				cout << "Close";
				break;
			case 'F':
				cout << "How";
				break;
			default:
				done = false;
				cout << "Please only enter a letter grade";
				break;
		}
	} while (!done);
	cin.get();
	return projectSeven();
}