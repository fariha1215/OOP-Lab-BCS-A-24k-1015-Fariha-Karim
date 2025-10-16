#include <iostream>
using namespace std;

class PetrolPump{
	private:
		int pumpID;
		double litersFilled;
		static double pricePerLiter;
		
	public:
		PetrolPump(int id, double liters){
			pumpID = id;
			litersFilled = liters;
		}

    void printReceipt(){
        double totalAmount = litersFilled*pricePerLiter;
        cout << "Pump ID: " << pumpID << endl;
        cout << "Liters Filled: " << litersFilled << " L" << endl;
        cout << "Price per Liter: " << pricePerLiter << " PKR" << endl;
        cout << "Total Amount: " << totalAmount << " PKR" << endl;
        cout << "-----------------------------" << endl;
    }
};

double PetrolPump::pricePerLiter = 270.50;

int main(){
    PetrolPump pump1(101, 10.5);
    PetrolPump pump2(102, 20);

    pump1.printReceipt();
    pump2.printReceipt();

    return 0;
}
