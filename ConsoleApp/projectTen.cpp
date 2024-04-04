#include "includes.h"
#include "functions.h"

// what we are using
using std::cout;
using std::cin;
using std::getline;
using std::string;
using std::isdigit;
using std::vector;
using std::reverse;

// variables
string name;
string tempName;
string sub_string;

int continueNameGrab;

//nameVec[];
vector<string> nameVec;

// little side project
inline void printLetters(const string stringName)
{
	// example of using .length() with strings
	for (int nameChar = 0; nameChar < stringName.length(); nameChar++) {
		// https://stackoverflow.com/questions/60710614/how-to-get-letter-from-string-by-index-c
		//sub_string = stringName.substr(nameChar, nameChar + 1);
		cout << stringName[nameChar] << "\n";

	}
}

// you could use a integer and string in a vector if you use a enum ***

static inline void storeVector(string stringName)
{
	for (int nameChar = 0; nameChar < stringName.length(); ++nameChar) {
		tempName = stringName[nameChar];
		nameVec.push_back(tempName);
		cout << nameVec[nameChar] << "\n";
	}
	// reversing the array because .push_back puts the value at the end of the vector
	reverse(nameVec.begin(), nameVec.end());
	//cout << nameArr[5] << "\n";
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

	// trying to print each letter of the name using .length()
	printLetters(name);
	// using vectors trying to store the letters of the name using the same concept
	storeVector(name);

	cin.get();

	return 0;
}