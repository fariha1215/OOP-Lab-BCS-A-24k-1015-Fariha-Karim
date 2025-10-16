#include <iostream>
using namespace std;

class CallRecord{
	private:
		string callerID;
		int durationMins;
		static int callsLogged;
	
	public:
		CallRecord(){
			callerID = " ";
			durationMins = 0;
		}
		
		static int totalCalls;
		
		CallRecord(string id, int duration){
			callerID = id;
			durationMins = duration;
			totalCalls++;
		}
		
		void displayRecord(){
			cout<<"Caller ID: "<<callerID<<"\nDuration: "<<durationMins<<" minutes"<<endl;
			cout<<"----------------";
		}
	
	static void getTotalCalls(){
		cout<<"Total Calls Logged: "<<callsLogged<<endl;
	}
};

int CallRecord :: callsLogged = 0;

int main(){
	CallRecord shiftCalls[20] = {
        CallRecord("03001234567", 5),
        CallRecord("03111223344", 8),
        CallRecord("03219876543", 3),
        CallRecord("03007654321", 10),
        CallRecord("03451239876", 4),
        CallRecord("03337778888", 12),
        CallRecord("03005556666", 7),
        CallRecord("03114567890", 6),
        CallRecord("03441112222", 9),
        CallRecord("03009998877", 2),
        CallRecord("03212344321", 11),
        CallRecord("03110001122", 15),
        CallRecord("03445556677", 20),
        CallRecord("03001231231", 5),
        CallRecord("03112223334", 3),
        CallRecord("03210009999", 7),
        CallRecord("03442223331", 6),
        CallRecord("03005554444", 4),
        CallRecord("03114445555", 10),
        CallRecord("03217778899", 8)
    };
    
    cout<<"Shift call records: "<<endl;
    for(int i=0; i<20; i++){
    	shiftCalls[i].displayRecord();
	}
    
    cout<<"------------------------"<<endl;
    
    CallRecord :: getTotalCalls();
    
    return 0;
}