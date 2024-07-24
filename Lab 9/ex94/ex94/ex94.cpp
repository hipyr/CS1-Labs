#include <iostream>;
using namespace std;
const int SIZE = 20;

int main() {
	int a[SIZE];
	int userNum;
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter Number " << i << endl;
		cin >> a[i];
		
	}
	cout << "what number are you looking for" << endl;
	cin >> userNum;
	for (int i = 0; i < SIZE; i++) {
		if (userNum == a[i]) {
			cout << "your number has been found";
			break;
		}
		else {
			cout << "your number cannot be found";
		}
	}


}