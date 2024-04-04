#include "includes.h"
#include "functions.h"

// what we are using
using std::cout;
using std::cin;
using std::getline;
using std::string;
using std::isdigit;

// variables
string name;
string sub_string;

int continueNameGrab;

// little side project
inline void printLetters(string stringName)
{
	// example of using .length() with strings
	for (int nameChar = 0; nameChar < stringName.length(); nameChar++) {
		// https://stackoverflow.com/questions/60710614/how-to-get-letter-from-string-by-index-c
		//sub_string = stringName.substr(nameChar, nameChar + 1);
		cout << stringName[nameChar] << "\n";

	}
}

// check if a string is a number
// https://stackoverflow.com/questions/4654636/how-to-determine-if-a-string-is-a-number-with-c
bool isNumber(const string& stringConversion)
{
	string::const_iterator i = stringConversion.begin();
	while (i != stringConversion.end() && isdigit(*i)) ++i;
	return !stringConversion.empty() && i == stringConversion.end();
}
// now to check if the digit is negative
bool isNegative(const string& input) 
{
	return input[0] == '-';
}

// learning more about strings
// .length()
// .empty()
// .clear()

int projectTen()
{
	// cases


	do {
		cout << "Enter your name \n";
		getline(cin, name);
		if (!name.empty() && !isNumber(name) && !isNegative(name))
		{
			continueNameGrab = 1;
		}
	// making sure that the user inputs the name
	} while (continueNameGrab == 0);

	if (name.length() > 12)
	{
		cout << "You have a long name! \n" << "\n";
	}

	// trying to print each letter of the name
	printLetters(name);

	



	cin.get();

	return 0;
}