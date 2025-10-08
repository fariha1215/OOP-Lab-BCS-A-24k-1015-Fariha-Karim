#include <iostream>
using namespace std;

class NUCES_Student{
	private:
		int id;
		string name;
		
	public:
		NUCES_Student(){
			id = 0;
			name = "Not Registered";
		}
		
		NUCES_Student(int id, string name){
			this -> id = id;
			this -> name = name;
		}
		
		NUCES_Student(const NUCES_Student &student){
			this -> id = student.id;
			this -> name = student.name;
		}
		
		void display(){
			cout<<"Student ID: "<<id<<" | Student name: "<<id<<endl;
		}
};

int main(){
	NUCES_Student student1(1001, "Ayesha");
	NUCES_Student student2(1002, "Haziq");
	
	student1.display();
	student2.display();
	
	return 0;
}
