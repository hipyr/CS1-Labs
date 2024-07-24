#include<iostream>
#include<cmath>
const double PI = 3.14159; // This constant is defined globally, known to all functions in this
// program as PI
const double CONVERSION = 0.3937; // This is the cm to inch conversion factor?
double area(double r); // Function declaration for function that computes cross section area
double area(double r, double h); // Function declaration for function that computes side area
int main(void)
{
	using namespace std;
	double h, r; //variables local to the main function
	cout << "Enter the radius and the height of the cylinder in cm <Enter> ";
	cin >> r >> h;
	cout << endl;
	cout << "Before I do any computation or call any function, I want to let you know that \n";
	cout << "you have entered r = " << r << " and h = " << h << "." << endl;
	cout << "I am planning to use inch, thus in the first function, I will convert r, and " << endl;
	cout << "in the second one I will convert h \n";
	cout << "The cross section area of the cylinder is " << area(r) << " inch-sqr " << endl;
	cout << "The side area of the cylinder is " << area(r, h) << " inch-sqr \n\n";

	return 0;
}
double area(double r)
{
	using namespace std;
	//Cross section area includes the disks at the bottom and the top
	r = r * CONVERSION; // converting r to inch

	return 2 * PI * pow(r, 2);
}
double area(double r, double h)
{
	using namespace std;
	double area; //variable local to Side_area function
	h = h * CONVERSION; // converting h to inch
	r = r * CONVERSION; // converting r to inch
	area = 2 * PI * r * h;

	return area;
}