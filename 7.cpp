
// WAP to find an area of a circle using function with no arguments and no return values .

#include <iostream>
const double pi = 3.14;
using namespace std;


float A(float r)
{
	return (pi * r * r);
}

int main()
{
	float r, Area;
	r = 5;

	
	Area = A(r);
	
	cout << "Area of Circle is :" << Area;
	return(0);
}