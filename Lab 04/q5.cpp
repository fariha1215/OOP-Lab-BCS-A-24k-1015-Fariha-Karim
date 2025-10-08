#include <iostream>
using namespace std;

class CurrencyExchange{
	private:
		const double PKR_to_USD_Rate;
		string& branchName;
		int totalTransactions;
	
	public:
		CurrencyExchange(const double rate, string& branch, int transactions) : PKR_to_USD_Rate(rate), branchName(branch),  totalTransactions(transactions){
			cout << "Currency Exchange Counter at " << branchName << " initialized with rate " << PKR_to_USD_Rate << " PKR per USD." << endl;	
		}

		double convertPKRtoUSD(double pkr){
			totalTransactions++;
			return pkr / PKR_to_USD_Rate;
		}
		
		void display(){
			cout << "Branch: " << branchName << endl;
			cout << "Exchange Rate (PKR?USD): " << PKR_to_USD_Rate << endl;
			cout << "Total Transactions: " << totalTransactions << endl;
		}

};
int main(){
	string branch = "Karachi Saddar";
	CurrencyExchange exchange(280.0, branch, 0);
	
	double usd = exchange.convertPKRtoUSD(56000);
	cout << "Converted 56000 PKR to USD = " << usd << endl;
	
	exchange.display();
	
	return 0;
}