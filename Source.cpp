#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double initialInvestment, monthlyDeposit, annualInterest, numMonths, numYears; //declaring variables
	double yearBalance, interestAmount, yearTotalIntrest;

	cout << "********************************" << endl; //printing the form and getting input from user
	cout << "********** Data Input **********" << endl;
	cout << "Initial Investment Amount: " << endl;
	cout << "Monthly Deposit: " << endl;
	cout << "Annual Interest: " << endl;
	cout << "Number of years: " << endl;

	system("PAUSE"); //waitng for input

	cout << endl;
	cout << "********************************" << endl;
	cout << "********** Data Input **********" << endl;
	cout << "Initial Investment Amount: $";
	cin >> initialInvestment;
	cout << "Monthly Deposit: $";
	cin >> monthlyDeposit;
	cout << "Annual Interest: %";
	cin >> annualInterest;
	cout << "Number of years: ";
	cin >> numYears;
	numMonths = numYears * 12;

	system("PAUSE");

	yearBalance = initialInvestment;

	cout << endl;
	cout << "\n Balance and Interest With Additional Monthly Deposits" << endl; //Display year data with monthly deposits
	cout << "===============================================================================================" << endl;
	cout << " Year\t\t\t" << setw(10) << "Year End Balance\t\t\t" << setw(10) << "Year End Earned Interest" << endl;
	cout << "-----------------------------------------------------------------------------------------------" << endl;


	for (int i = 0; i < numYears; i++) {
		interestAmount = (yearBalance) * ((annualInterest / 100)); //calculate yearly interest
		yearBalance = yearBalance + interestAmount; //Calculate year end total
		cout << " " << (i + 1) << setw(10) << "\t\t$" << fixed << setprecision(2) << setw(10) << yearBalance << "\t\t\t\t$" << setw(10) << interestAmount << endl;
	}
	yearBalance = initialInvestment; //Set total amount to initial investment to be updated

	cout << "\n Balance and Interest With Additional Monthly Deposits" << endl; //Display year data with monthly deposits
	cout << "===============================================================================================" << endl;
	cout << " Year\t\t\t" << setw(10) << "Year End Balance\t\t\t" << setw(10) << "Year End Earned Interest" << endl;
	cout << "-----------------------------------------------------------------------------------------------" << endl;

	for (int i = 0; i < numYears; i++) {
		yearTotalIntrest = 0; // set total interest back to zero

		for (int j = 0; j < 12; j++) { // calculate totals 
			interestAmount = (yearBalance + monthlyDeposit) * ((annualInterest / 100) / 12);
			yearTotalIntrest = yearTotalIntrest + interestAmount;
			yearBalance = yearBalance + monthlyDeposit + interestAmount;
		}
		//print the results
		cout << " " << (i + 1) << setw(10) << "\t\t$" << fixed << setprecision(2) << setw(10) << yearBalance << "\t\t\t\t$" << setw(10) << yearTotalIntrest << endl;
	}
	return 0;
}