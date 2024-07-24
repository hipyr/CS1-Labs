#include<iostream>;
using namespace std;

void instructions(int& choice)
{
	cout << "Hello welcome toq the shape drawing program" << endl;
	cout << "please select from either a diamond (1), or a triangle (2)" << endl;
	cin >> choice;
}

void draw_triangle(int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			cout << "*";
		}

		cout << endl;
	}
}
void draw_diamond(int size) {
	draw_triangle(size);
	for (int i = size - 1; i > 0; i--) {
		for (int j = 0; j < size - i - 1; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			cout << "*";
		}

		cout << endl;
	}
}
void draw_shape(int choice, int size)
{
	switch (choice){
		case 1:
			draw_triangle(size);
			break;
		case 2: 
			draw_diamond(size);
			break;
	}
}
int main()
{
	int choice, size;
	instructions(choice);
	if (choice != 1 && choice != 2)
	{
		cout << "You requested to quit. Bye! \n";
		return 0;
	}
	cout << "how big would you like your shape be whole numbers only" << endl;
	cin >> size;
	draw_shape(choice, size);
	return 0;
}
