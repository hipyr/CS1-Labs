#include <iostream>
#include<string>
#include<sstream>
#include<cctype>

using namespace std;

bool hasCapitalLetters(string words) {
	for (int i = 0; i < words.length(); i++) {
		if (isupper(words[i])) {
			return true;
		}
	}
	return false;
}
int main() {
	string sentence;
	getline(cin, sentence);

	stringstream stream(sentence);
	string words;
	while (stream >> words) {
		if (hasCapitalLetters(words)) {
			cout << "the word " << words << "is capslocked" << endl;
		}
		else {
			cout << words << "does not have caplocks" << endl;
		}
	}
}