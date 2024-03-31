#include "includes.h"
#include "functions.h"

/* type conversion */
using std::cout;
using std::cin;

int projectTwo() 
{
    // clears console
    system("CLS");

    /* used for line 25-26 */
    int correct = 9;
    int questions = 13;
    double score = (correct / (double)questions) * 100;


    // implicit cast (X becomes 3)
    double x = (int) 3.14;
    cout << x << "\n";

    // explicit cast
    char charTest = 100;
    cout << charTest << "\n";

    // implicit cast
    cout << (char)100 << "\n";

    cout << score << "% \n";
    cout << (int)score << "% \n";

    cin.get();

    // calls the next function
    return projectThree();
}