#include <iostream>
using namespace std;

class Student {
    string name;
    int rollno;
    float gpa;

public:

    Student(string name, int rollno, float gpa);

  
    void display();
};


Student::Student(string name, int rollno, float gpa) {
    this->name = name;
    this->rollno = rollno;
    this->gpa = gpa;
}


void Student::display() {
    cout << "\nStudent Details" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollno << endl;
    cout << "GPA: " << gpa << endl;
}

int main() {
    string name;
    int rollno;
    float gpa;

    cout << "Enter Student Name: ";
    cin >> name ;
    cout<<endl;


    cout << "Enter Student Roll No: ";
    cin >> rollno;
    cout<<endl;

    cout << "Enter Student GPA: ";
    cin >> gpa;
    cout<<endl;

    Student s(name, rollno, gpa);

    s.display();

    return 0;
}