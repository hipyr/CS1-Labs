#include<iostream>
using namespace std;
class Loan // Loan is called structure tag
{
public:
	void set();
	float payment();
	void display();
private:
	int ID; // assume an unique integer between 1111-9999
	float amount; // $ amount of the loan
	float rate; // annual interest rate
	int term; // number of months, length of the loan
};
int main()
{
	Loan loan1;
	loan1.set();
	loan1.payment();
	loan1.display();
	return 0;
}
void Loan::set()
{
	// Initialize the loan1 object
	cout << "Enter the ID of this loan \n";
	cin >> ID;
	cout << "Enter the amount of this loan \n";
	cin >> amount;
	cout << "Enter the annual interest rate of this loan (in %) \n";
	cin >> rate;
	cout << "Enter the term (number of months, length of the loan) \n";
	cin >> term;

}
void Loan::display() {
	cout << "the id of the loan is " << ID << endl;
	cout << "The Amount of the loan is " << amount << endl;
	cout << "the annual interest rate is " << rate << endl;
	cout << "The term will be " << term << endl;
	cout << "the paymemnt will be " << payment() << endl;
}
float Loan::payment()
{
	float temp_rate = rate / 1200; // To convert % yearly rate to monthly fraction
	return amount * temp_rate * (pow((temp_rate + 1), term) / (pow((temp_rate + 1), term) - 1));
}