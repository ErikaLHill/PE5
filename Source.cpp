#include <iostream>

#include <iomanip>

#include <cmath>

using namespace std;

int main()

{
	const double PI = 3.14159;

	double height;

	double radius;

	cout << "Enter the height of the cylinder: ";

	cout << endl;

	cin >> height;

	cout << "Enter the radius of the base of the cylinder: ";

	cout << endl;

	cin >> radius;

	cout << fixed << showpoint << setprecision(2);

	cout << "Volume of the cylinder = " << PI * pow(radius, 2.0) * height << endl;

	cout << "Surface area: " << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;

	return 0;
}