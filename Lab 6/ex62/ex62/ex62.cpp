#include<iostream>;
using namespace std;

void display_it(double x, double y ,int precision)
{
	using namespace std;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(precision);
	cout << x << endl;
	cout << y << endl;
}
int main()
{
	display_it(1, 20, 3);
}