#include "includes.h"
#include "functions.h"

// what we are using
using std::cin;
using std::cout;
using std::string;
using std::ws;

// defining variables
int grade;
float evenNumber;
string hungryAnswer;

int loopIteration = 0;

// https://stackoverflow.com/questions/650162/why-cant-the-switch-statement-be-applied-to-strings
// function used to allow strings in a switch statement

// this code gives a warning
string_code hashit(std::string const& inString) {
	if (inString == "yes") return yes;
	if (inString == "no") return no;
	// doing this to fix it cuz lazy
	else return no;
}


/* ternary operator */
int projectEight() {
	// ternary operator ?: = replacement to an if/else statement
	// condition ? expression1 : expression 2;

	/* project one */

	// makes sure that the grade is logical
	do {
		cout << "What is your grade in Math?: \n";
		cin >> grade;
	} while (grade > 100 || grade < 0);

	grade >= 70 ? cout << "You pass!\n" : cout << "You fail!\n";

	/* project two */
	cout << "Enter an even number: \n";
	cin >> evenNumber;
	// rounds the number
	evenNumber = round(evenNumber);

	// checks if % 2 == 1 which makes it an ODD, % 2 == 0 would make it even
	(int)evenNumber % 2 == 1 ? cout << "ODD!\n" : cout << "EVEN\n";



	// i did a different method of doing this from the video because i was testing out how to switch a string
	do {
		cout << "Are you hungry? \n";
		// getline using <string>
		// fix the space for user input using std::ws
		getline(cin >> ws, hungryAnswer);

		// wasn't able to fix the do-while loop using this method, so i am just making it simpler.
		// splitting up the yes and no in order to do the correct way after this one
		if (hungryAnswer.compare("yes")) 
		{
			loopIteration = 1;
		}
		else if (hungryAnswer.compare("no")) {
			loopIteration = 2;
		}
	// https://stackoverflow.com/questions/16568345/c-do-while-loop-until-a-string-meets-certain-criteria
	// use .compare whenever working with strings
	} while (loopIteration < 1);

	switch (hashit(hungryAnswer))
	{
		case yes:
			cout << "Go get some food \n";
			break;
		case no:
			cout << "Cmon bro go bulk \n";
			break;
	}

	// Correct way to do this project (1:18:12) https://www.youtube.com/watch?v=-TkoO8Z07hI&list=PL5k_PSEf-NOqWoQlsDP5C5mBKnpYrw6H8&index=1&pp=gAQBiAQB
	// if loopIter == 2 "Gym time now" else "You better get the food son"

	loopIteration == 2 ? cout << "You better get the food son \n" : cout << "Gym time now \n";

	// or

	cout << (loopIteration == 2 ? "You better get the food son \n" : "Gym time now \n");


	cin.get();
	return projectNine();
}