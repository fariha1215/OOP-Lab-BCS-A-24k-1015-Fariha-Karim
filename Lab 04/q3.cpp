#include <iostream>
using namespace std;

class PropertyDeed{
	private:
		int* ownerID;
		
	public:
		PropertyDeed(int id){
			ownerID = new int(id);
		}
		
		PropertyDeed(const PropertyDeed& other, bool shallow){
			if(shallow){
				this -> ownerID = other.ownerID;
			}
			else{
				this -> ownerID = new int(*other.ownerID);
			}
		}
		
		PropertyDeed(const PropertyDeed& other){
			this -> ownerID = new int(*other.ownerID);
		}
		
		~PropertyDeed(){
			delete ownerID;
		}
		
		void setOwnerID(int id){
			*ownerID = id;
		}
		
		void display(const string& name){
			cout<<name<<"Value: "<<*ownerID<<" | Address: "<<ownerID<<endl;
		}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
};

int main(){
	cout << "Original PropertyDeed" << endl;
    PropertyDeed original(101);
    original.display("Original");

    cout << "\nShallow Copy" << endl;
    PropertyDeed shallowCopy(original, true); // shallow copy
    shallowCopy.display("Shallow Copy");

    cout << "\nDeep Copy" << endl;
    PropertyDeed deepCopy(original); // deep copy
    deepCopy.display("Deep Copy");

    cout << "\nChanging Original's OwnerID to 202" << endl;
    original.setOwnerID(202);

    original.display("Original");
    shallowCopy.display("Shallow Copy");
    deepCopy.display("Deep Copy");
    
	return 0;
}