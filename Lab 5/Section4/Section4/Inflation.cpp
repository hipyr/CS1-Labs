#include <iostream>
#include <cmath>
using namespace std;


double inflation_calc(double oldPrice, double newPrice) {
	double inflation_rate = ((newPrice - oldPrice) / oldPrice * 100);
	return inflation_rate;
}
int main(void) {
	double oldPrice, newPrice;
	char userAns = 'y';
	do {
		cout << "Enter the price of the item a year ago\n";
		cin >> oldPrice;
		cout << "Enter the Price of the same item today\n";
		cin >> newPrice;
		double inflation_rate = inflation_calc(oldPrice, newPrice);
		cout << "the inflation rate for the past year was " << inflation_rate << endl;
		cout << "would you like to keep going Type Y/N\n";
		cin >> userAns;
		
	} while (userAns == 'y');
}
