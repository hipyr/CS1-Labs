#include <iostream>
#include <cmath>
#include <iomanip> // For std::setprecision and std::fixed

using namespace std;

struct Loan {
    int ID;          // Unique integer between 1111-9999
    double amount;   // $ amount of the loan
    double rate;     // Annual interest rate in percentage
    int term;        // Number of months, length of the loan
};

// Function prototypes
void initialize_loan(Loan* loan);
double calculate_payment(const Loan& loan);

int main() {
    // Dynamic allocation of two loans
    Loan* loan1 = new Loan;
    Loan* loan2 = new Loan;

    // Initialize the loans
    cout << "Enter details for Loan 1:\n";
    initialize_loan(loan1);
    cout << "Enter details for Loan 2:\n";
    initialize_loan(loan2);

    // Calculate and display payments
    double payment1 = calculate_payment(*loan1);
    double payment2 = calculate_payment(*loan2);
    double totalPayment = payment1 + payment2;

    // Output formatting for currency
    cout << fixed << setprecision(2);
    cout << "Monthly Payment for Loan " << loan1->ID << ": $" << payment1 << endl;
    cout << "Monthly Payment for Loan " << loan2->ID << ": $" << payment2 << endl;
    cout << "Total Monthly Payment: $" << totalPayment << endl;

    // Cleanup
    delete loan1;
    delete loan2;

    return 0;
}

// Function definitions
void initialize_loan(Loan* loan) {
    cout << "Enter the ID of this loan (1111-9999):\n";
    cin >> loan->ID;
    while (loan->ID < 1111 || loan->ID > 9999) {
        cout << "Invalid ID, please enter a number between 1111 and 9999:\n";
        cin >> loan->ID;
    }

    cout << "Enter the amount of this loan:\n";
    cin >> loan->amount;
    cout << "Enter the annual interest rate of this loan (in %):\n";
    cin >> loan->rate;
    cout << "Enter the term (number of months, length of the loan):\n";
    cin >> loan->term;
}

double calculate_payment(const Loan& loan) {
    double monthlyRate = loan.rate / 1200; // Convert annual rate percentage to monthly fraction
    return loan.amount * monthlyRate * (pow((monthlyRate + 1), loan.term) / (pow((monthlyRate + 1), loan.term) - 1));
}
