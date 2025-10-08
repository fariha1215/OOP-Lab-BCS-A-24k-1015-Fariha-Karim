#include <iostream>
using namespace std;

class Student {
public:
    string name;
private:
    int rollNumber;
public:
    void setRollNo(int r) {
        rollNumber = r;
    }
    int getRollNo() {
        return rollNumber;
    }
};

int main() {
    Student s;
    s.name = "Suha";
    s.setRollNo(202);
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.getRollNo() << endl;
}
