#include <iostream>
using namespace std;

class Operation
{
public:
    
    void calculate(int a, int b)
    {
        cout << "Addition = " << a + b << endl;
    }

    // Subtraction (3 int arguments)
    void calculate(int a, int b, int c)
    {
        cout << "Subtraction = " << a - b << endl;
    }

    // Multiplication (2 float arguments)
    void calculate(float a, float b)
    {
        cout << "Multiplication = " << a * b << endl;
    }

    // Division (2 double arguments)
    void calculate(double a, double b)
    {
        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division by zero is not possible." << endl;
    }
};

int main()
{
    Operation op;

    int a, b;

    cout << "Enter First Number : ";
    cin >> a;

    cout << "Enter Second Number : ";
    cin >> b;

    cout << "\n===== ARITHMETIC OPERATIONS =====\n";

    op.calculate(a, b);                 
    op.calculate(a, b, 0);              
    op.calculate((float)a, (float)b);   
    op.calculate((double)a, (double)b); 

    return 0;
}