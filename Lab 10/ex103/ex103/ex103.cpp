#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string file_contents;

	ifstream file("input.txt");
	ofstream out_s("output.txt");

	if (file.is_open()) {
		while (getline(file, file_contents)) {
			replace(file_contents.begin(), file_contents.end(), 'G', 'g');
			cout << file_contents;
			out_s << file_contents;
		}

		file.close();
	}
	else {

		cout << "error reading  file";
	}
}