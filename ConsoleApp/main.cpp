// https://www.youtube.com/watch?v=-TkoO8Z07hI
// video where these definitions came from

#include <iostream>
#include <vector>

#include "functions.h"

// what we are using
using std::vector;
using std::string;
using std::pair;
using std::cout;
using std::cin;

// typedef
typedef vector<pair<string, int>> pairlist_t;
typedef string text_t;
typedef int number_t;

// using
using pairlist2_t = vector<pair<string, int>>;
using text2_t = string;
using number2_t = double;

/* typedef and type aliases */
int main() 
{
    text_t firstName = "Wein";
    number_t age = 50;

    text2_t lastName = "Massive";
    number2_t number2_t = 99.99;

    cout << firstName << "\n";
    cout << age << "\n";

    cout << lastName << "\n";
    cout << number2_t << "\n";

    cin.get();
    projectTwo();
    //return 0;
}

/* type conversion */
