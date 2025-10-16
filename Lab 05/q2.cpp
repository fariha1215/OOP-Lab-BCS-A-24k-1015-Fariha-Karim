#include <iostream>
using namespace std;

class MobileDevice{
	private:
		string modelName;
		const string IMEINumber;
	
	public:
		 MobileDevice(string model, string imei) : modelName(model), IMEINumber(imei) {}

    void verifyDevice() const{
        cout << "Device Verification" << endl;
        cout << "Model Name: " << modelName << endl;
        cout << "IMEI Number: " << IMEINumber << endl;
        cout << "Device is registered with PTA." << endl;
        cout << "-----------------------------" << endl;
    }
};

int main(){
    MobileDevice device1("Samsung Galaxy S22", "356789123456789");
    MobileDevice device2("iPhone 14 Pro", "490123456789123");

    device1.verifyDevice();
    device2.verifyDevice();

    return 0;
}
