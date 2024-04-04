#include "includes.h"
#include "functions.h"


// what we are using
using std::cout;
using std::cin;

// variables
int parameterFix;
bool fahrenheitConversion;
double inputTemp;
double newTemp;


// used for the ternary operator in order to cout the input and set farenheit
static inline void getAnswer(bool conversionMethod) 
{
	switch (conversionMethod)
	{
		case true:
			cout << "converting celcius to fahrenheit \n";
			fahrenheitConversion = true;
			break;
		case false:
			cout << "converting fahrenheit to celcius \n";
			fahrenheitConversion = false;;
			break;
		default:
			cout << "dumby head \n";
			break;
	}
}

// used to do the math
static inline void temperatureMath(double temperature)
{
	// uses the variable we set earlier in getAnswer(bool)
	switch (fahrenheitConversion) {
		case true:
			newTemp = (temperature * 1.8) + 32;
			break;
		case false:
			newTemp = (temperature - 32) / 1.8;
			break;
		default:
			cout << "dumby head \n";
			break;
	}

}

// temperature conversion program
// convert fahrenheit to celsius
int projectNine()
{
	system("CLS");

	do {
		cout << "[1]  to convert celsius to fahrenheit \n\n";
		cout << "[2]  to convert fahrenheit to celcius \n\n";
		cin >> parameterFix;
	// this is a little confusing but it works!
	} while ((double)abs(parameterFix) / 2 > 1);

	// ternary operator
	parameterFix == 1 ? getAnswer(true) : getAnswer(false);

	cout << "what is the temperature in ";
	parameterFix == 1 ? cout << "celsius \n" : cout << "fahrenheit \n";
	cin >> inputTemp;

	temperatureMath(inputTemp);

	cout << "the temperature is: " << newTemp;
	parameterFix == 2 ? cout << " in celsius \n" : cout << " in fahrenheit \n";

	cin.get();
	
	return projectTen();
}