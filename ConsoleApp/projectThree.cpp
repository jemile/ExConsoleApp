#include "includes.h"
#include "functions.h"

// https://cplusplus.com/reference/string/string/
// this function starts using the <string> library by using getline()

using std::string;
using std::cout;
using std::cin;
using std::ws;


int projectThree()
{
	// clears console
	system("CLS");

	string name;
	cout << "Whats your full name?: \n";
	// getline using <string>
	// fix the space for user input using std::ws
	std::getline(cin >> ws, name);
	// printing reference (random value)
	cout << &name << "\n"; 
	// printing the name from the line
	cout << name << "\n";
	
	cin.get();

	// calls the next function
	return projectFour();

}