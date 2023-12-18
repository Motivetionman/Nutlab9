#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    double loan;
    double rate_per_year;
    double amount_you_can_pay_per_year;

    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> rate_per_year;
    cout << "Enter amount you can pay per year: ";
    cin >> amount_you_can_pay_per_year;

    cout << setw(13) << left << "EndOfYear#";
    cout << setw(13) << left << "PrevBalance";
    cout << setw(13) << left << "Interest";
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";

    cout << fixed << setprecision(2);

    int year = 1;
    while (loan > 0) {
        double interest = loan * (rate_per_year / 100);
        double total = loan + interest;
        double payment = min(total, amount_you_can_pay_per_year);
        double new_balance = total - payment;

        cout << setw(13) << left << year;
        cout << setw(13) << left << loan;
        cout << setw(13) << left << interest;
        cout << setw(13) << left << total;
        cout << setw(13) << left << payment;
        cout << setw(13) << left << new_balance;
        cout << "\n";

        loan = new_balance;
        year++;
    }

    return 0;
}
	
