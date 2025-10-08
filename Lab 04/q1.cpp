#include <iostream>
using namespace std;

class MobileAccount{
	private:
		double balance;
		string phoneNumber;
	public:
	MobileAccount(){
		balance = 50.0;
		phoneNumber = "Empty";
	}
	
	MobileAccount(double bal, string phone){
		this -> balance = bal;
		this -> phoneNumber = phone;
	}
	
	void setbalance(double bal){
		this -> balance = bal;
	}
	
	double getbalance(){
		return balance;
	}
	
	void setphoneNumber(string phone){
		this -> phoneNumber = phone;
	}
	
	string getphoneNumber(){
		return phoneNumber;
	}
	
	void display(){
		cout<<"Balance: "<<balance<<endl;
		cout<<"Phone Number: "<<phoneNumber<<endl;
		cout<<"-----------------"<<endl;
	}
};

int main(){
	MobileAccount a1(250, "123456693");
	a1.display();
	
	return 0;
}
