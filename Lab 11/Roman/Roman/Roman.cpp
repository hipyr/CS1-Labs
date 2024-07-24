#include<iostream>
#include<string>
#include <sstream>
#include <unordered_map>
using namespace std;

class romanType {
public:
    void set();
    void display();
    void convert();
private:
    string romanNumeral;
    int PositiveInt;
};

int main() {

    romanType type1;
    type1.set();
    type1.display();
    return 0;
}

void romanType::convert() {

    unordered_map<char, int> roman_map = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;

    for (int i = 0; i < romanNumeral.length(); i++) {
        char c = romanNumeral[i];
        int val = roman_map[c];

        if (i < romanNumeral.length() - 1 && val < roman_map[romanNumeral[i + 1]]) {
            result -= val;
        }
        else {
            result += val;
        }
    }

    PositiveInt = result;
}

void romanType::display() {
    cout << "Roman: " << romanNumeral << endl;

    cout << "Number: " << PositiveInt << endl;
}

void romanType::set() {
    cout << "Enter your roman numeral" << endl;
    getline(cin, romanNumeral);
    convert();
}