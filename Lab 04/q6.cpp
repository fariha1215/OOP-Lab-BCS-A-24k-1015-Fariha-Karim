#include <iostream>
using namespace std;

class OrderDetails{
	private:
		int orderID;
		string itemName;
		const double deliveryFee;
	
	public:
		OrderDetails(int orderID, string itemName, const double deliveryFee) : deliveryFee(deliveryFee){
			this -> orderID = orderID;
			this -> itemName = itemName;
		}
		
		~OrderDetails(){
			cout << "Order "<<orderID << " is being Archived and memory cleared"<<endl;
		}
		
		void display(){
			cout<<"Order ID: "<<orderID<<endl;
			cout<<"Item Name: "<<itemName<<endl;
			cout<<"Delivery Fee: "<<deliveryFee<<endl;
		}
};

int main(){
	OrderDetails o1(101, "Cake", 200);
	o1.display();
	
	return 0;
}