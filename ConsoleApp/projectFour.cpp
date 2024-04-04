#include "includes.h"
#include "functions.h"

// https://cplusplus.com/reference/cmath/#google_vignette
// this function starts using <cmath> in order to use certain functions, more can be found here.

// what we are using in the projectFour
using std::max;
using std::min;
using std::cout;
using std::cin;

int projectFour()
{
	// clears console
	system("CLS");

	// defining variables
	double x = 3;
	double y = 4;
	double z;

	cout << "x = 3 | y = 4 \n";

	// std::max example
	cout << "std::max example\n";
	z = max(x, y);
	cout << z << "\n";

	// std::min example
	cout << "std::min example \n";
	z = min(x, y);
	cout << z << "\n";

	cout << "\n";

	// clears console
	system("CLS");
	/* using <cmath> */
	
	// to the power of (pow)
	cout << "<cmath> to the power of (pow) example \n";
	z = pow(2, 3);
	cout << "<cmath> 2^3: " << z << "\n";

	// square root (sqrt)
	cout << "<cmath> square root (sqrt) exmaple \n";
	z = sqrt(9);
	cout << "<cmath> sqrt(9): " << z << "\n";

	// absolute value (abs)
	cout << "<cmath> absolute value (abs) example \n";
	z = abs(-3);
	cout << "<cmath> abs(-3): " << z << "\n";
	cout << "this is because it is three away from zero" << "\n";

	// round value (round)
	z = 3.5;
	z = round(z);
	cout << "<cmath> round value (round) example \n";
	cout << "<cmath> round(3.5): " << z << "\n";

	// ceiling function (ceil) round up
	z = 3.1;
	z = ceil(z);
	cout << "<cmath> ceil value (ceil) example \n";
	cout << "<cmath> ceil(3.1): " << z << "\n";

	// flooring fucntion (floor) round down
	z = 3.9;
	z = floor (z);
	cout << "<cmath> floor value (floor) example \n";
	cout << "<cmath> floor(3.9): " << z << "\n";

	cin.get();

	// calls the next function
	return projectFive();
}