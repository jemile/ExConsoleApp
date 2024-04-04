#pragma once

/* this is needed to call the next function */

int projectTwo();
int projectThree();
int projectFour();
int projectFive();
int projectSix();
int projectSeven();
int projectEight();
int projectNine();
int projectTen();

/* extra functions i used for math/conversions */

// used in projectSeven.cpp, storing it here in case i use it in the future
double math(int numOne, int numTwo, int type);

// used in projectEight.cpp, it is used to hash a string in order to use it in a switch statement
enum string_code {
	yes,
	no,
};

string_code hashit(std::string const& inString);

// used in projectTen.cpp, it is used to print letters out of a string, just made it for educational purposes
inline void printLetters(std::string stringName);

// were used in projectTen.cpp to make sure the user's inputed name was not a number nor negative
bool isNegative(const std::string& input);
bool isNumber(const std::string& stringConversion);
