#include<iostream>
using namespace std;
int main(void)
{
	int i = 0;
	int a = 2, b = 4, p = 1;
	// computing 2^4
	cout << a << " to the power of " << b << " is = " << pow(2, 4) << endl;
	i = 0;
	p = 1;
	a = 3, b = 3;
	 // computing 3^3
	cout << a << " to the power of " << b << " is = " << pow(3, 3) << endl;
	i = 0;
	p = 1;
	a = 5, b = 4;
	// computing 5^4
	cout << a << " to the power of " << b << " is = " << pow(5, 4) << endl;
	return 0;
}