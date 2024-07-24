#include <iostream>
using namespace std;
const int SIZE = 8; // Set the maximum size for the array
int main(void)
{
	int numlist[SIZE];
	// Read SIZE integers from the keyboard
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter value #" << i + 1 << ": ";
		cin >> numlist[i];
	}
	// Display the numbers in a reverse order
	for (int i = SIZE; i > 0; i--)
	{
		cout << "Value #" << i << ": ";
		cout << numlist[i - 1] << endl; //Pay attention to i-1!
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Value #" << i << ": ";
		cout << numlist[i] << endl; //Pay attention to i-1!
	}
	return 0;
}