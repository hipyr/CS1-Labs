#include <iostream>;
using namespace std;


void get_input(int& i, int& j)
{
	cout << "Please enter two values for i and j separated by a single space, then press<Enter>:";
	cin >> i >> j;
	cout << endl;
	return; // a void function, returns nothing. This instruction is not required in this example.
}
void process(int& i, int& j)
{
	i = i + 10;
	j = j + 20;
	cout << "Inside function Process \n";
	cout << "I added 10 to i, and 20 to j, i = " << i << " and j = " << j << "\n";
}

int main()
{
	int i, j;
	get_input(i, j);
	cout << "I am about to call function process, i = " << i << " j = " << j << endl;
	process(i, j);
	cout << "I just came back from function Process, i = " << i << " j = " << j << endl;
	return 0;
}
