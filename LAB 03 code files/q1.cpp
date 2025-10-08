#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
};

int main() {
    Student s;
    s.name = "Amna";
    s.rollNumber = 1001;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
}
