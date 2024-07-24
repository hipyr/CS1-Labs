#include<iostream>
#include<cmath> // For pow function
using namespace std;

class Loan {
public:
    Loan(); // Default constructor
    Loan(int initID, float initAmount, float initRate, int initTerm); // Parameterized constructor
    void set();
    float payment();
    void display();
    float add_loans(Loan loan1, Loan loan2);
private:
    int ID; // Assume an unique integer between 1111-9999
    float amount; // $ amount of the loan
    float rate; // annual interest rate
    int term; // number of months, length of the loan
    float monthly_payment; // to store the monthly payment of the loan
};

int main() {
    Loan loan1; // Using default constructor
    Loan loan2(1234, 5000, 5.5, 24); // Using parameterized constructor

    cout << "Enter details for the first loan:\n";
    loan1.set();

    cout << "\nFirst loan details:\n";
    loan1.display();
    cout << "\nSecond loan details:\n";
    loan2.display();

    cout << "\nTotal monthly payment for both loans: " << loan1.add_loans(loan1, loan2) << endl;

    return 0;
}

Loan::Loan() : ID(0), amount(0.0), rate(0.0), term(0), monthly_payment(0.0) {
    // Default constructor with initialization list
}

Loan::Loan(int initID, float initAmount, float initRate, int initTerm) :
    ID(initID), amount(initAmount), rate(initRate), term(initTerm) {
    // Parameterized constructor with initialization list
    monthly_payment = payment(); // Calculate and store the monthly payment
}

void Loan::set() {
    cout << "Enter the ID of this loan: ";
    cin >> ID;
    cout << "Enter the amount of this loan: ";
    cin >> amount;
    cout << "Enter the annual interest rate of this loan (in %): ";
    cin >> rate;
    cout << "Enter the term (number of months, length of the loan): ";
    cin >> term;
    monthly_payment = payment(); // Calculate and store the monthly payment after setting details
}

void Loan::display() {
    cout << "The ID of the loan is: " << ID << endl;
    cout << "The Amount of the loan is: " << amount << endl;
    cout << "The annual interest rate is: " << rate << endl;
    cout << "The term of the loan is: " << term << " months" << endl;
    cout << "The monthly payment will be: " << monthly_payment << endl;
}

float Loan::payment() {
    float temp_rate = rate / 1200; // To convert % yearly rate to monthly fraction
    return amount * temp_rate * (pow((temp_rate + 1), term) / (pow((temp_rate + 1), term) - 1));
}

float Loan::add_loans(Loan loan1, Loan loan2) {
    return loan1.monthly_payment + loan2.monthly_payment; // Sum the monthly payments of two loans
}
