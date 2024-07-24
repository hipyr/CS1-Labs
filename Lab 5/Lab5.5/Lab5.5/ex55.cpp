#include<iostream>
#include<cmath>
using namespace std;
//Let’s declare first any global constant, if any required
// This variable is defined globally, i.e. it is known to all functions in this program as PI
// To declare a global constant you must write it outside the main() function
const double PI = 3.14159;
//Now we declare any programmer defined function
double cross_area(double r); // Function prototype for function cross_area
double side_area(double r, double h); // Function prototype for function Side_area
// Start defining the main function
int main(void)
{
	double r, h; //variables local to the main function
	cout << "Enter the radius and the height of the cylinder in Cm <Enter> ";
	cin >> r >> h;
	cout << endl;
	cout << "Before I do any computation or call any function, I want to let you know that \n";
	cout << "you have entered r = " << r << " and h = " << h << "." << endl;
	cout << "I am planning to use inch, thus in the first function, I will convert r, and " << endl;
	cout << "in the second one I will convert h \n";
	cout << "The cross section area of the cylinder is " << cross_area(r) << " inch-sqr" << endl;
	cout << "The side area of the cylinder is " << side_area(r, h) <<" inch-sqr \n\n";
	
	return 0;
}
// Definition of all programmer defined functions
double cross_area(double r)
{
	//Cross section area includes the disks at the bottom and the top
	r = r * 0.3937; // converting r to inch
	return 2 * PI * pow(r, 2);
}
double side_area(double r, double h)
{
	double area; //variable local to side_area function
	h = h * 0.3937; // converting h to inch
	r = r * 0.3937;
	area = 2 * PI * r * h;
	return area;
}