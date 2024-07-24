#include<iostream>
using namespace std;
int main() {
	char UserResponse;
	bool keepGoing;
	int firstNum, powNum;

	do {
		cout << "enter your first number :\n";
		cin >> firstNum;
		cout << "enter the number you would like to power it too:\n";
		cin >> powNum;
		cout << "your number " << firstNum << "to the " << powNum << "is totaled to : " << pow(firstNum, powNum) << endl;
		cout << "type y/n if you would like to try another number\n";
		cin >> UserResponse;

		if (UserResponse == 'n') {
			keepGoing = false;
		} 
	} while (keepGoing);
}