#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    static int totalStudents;

    Student(int m)
    {
        marks = m;
        totalStudents++;
    }

    friend void display(Student s);
};

int Student::totalStudents = 0;

void display(Student s)
{
    cout << "Marks: " << s.marks << endl;
    cout << "Total Students: " << Student::totalStudents << endl;
}

int main()
{
    Student s1(85);
    Student s2(90);

    display(s1);
    display(s2);

    return 0;
}