#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main() {
	string phrase("The C and C++ compilers are integrated; G++ is a script to call Gcc with options to recognize C++. Gcc processes input files through one or more stages.");
	replace(phrase.begin(), phrase.end(), 'G', 'g');
	
	cout << phrase;
}