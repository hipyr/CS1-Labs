#include<iostream>
#include<fstream> // Step (1)
#include<cstdlib>
#include<cmath>
using namespace std;
void get_stream(ifstream& in_s, ofstream& out_stream); // added function
int main()
{
	double x;
	int count = 0;
	float sum = 0, avg;
	ifstream in_s; // Step (2)-B - declaration of the stream of type input
	ofstream out_stream;
	get_stream(in_s, out_stream);
	cout << "\t x \t\t x^2 \t\t Current Sum \n";
	cout << "\t === \t\t === \t\t ========== \n";
	while (in_s >> x) // Step (4)-Read all numbers one-by-one to the end of the file
	{
		sum = sum + x;
		cout << "\t " << x << "\t\t " << pow(x, 2) << "\t\t " << sum << "\n";
		count++;
		out_stream << "\t " << x << "\t\t " << pow(x, 2) << "\t\t " << sum << "\n";
	}
	avg = sum / count;
	cout << "\n \t\t The average of these " << count << " numbers is: " << avg << endl;
	out_stream.close();
	in_s.close(); // Step (5)-Close the connection (close the file)
	return 0;
}
void get_stream(ifstream& in_s, ofstream& out_stream)
{
	char input_file[15]; // Step (2)-A
	char out_name[15];
	cout << "Please input the input file name \n"; // Step (3)-A Get the file name
	cin >> input_file;
	cout << "Please input the output file name \n";
	cin >> out_name;
	out_stream.open(out_name);
	in_s.open(input_file); // Step (3)-B - connect to the input file and test
	if (in_s.fail())
	{
		cout << "Input file opening failed. \n";
		exit(1); // if we couldn't open the file to read from we exit
	}
}