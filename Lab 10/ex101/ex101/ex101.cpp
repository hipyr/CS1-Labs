#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[8], s2[8], temp[8];
	
	cout << "enter two words to combine them" << endl;
	cin >> s1 >> s2;
	strcat_s(s1, s2);
	cout << "your combined word is " << s1 << endl;
	strcpy_s(temp, s1);
	_strrev(temp);

	if (strcmp(temp, s1) == 0) {
		cout << s1 << " is a palindrome";
	}
	else {
		cout << s1 << " is not a palindrome";
	}
}