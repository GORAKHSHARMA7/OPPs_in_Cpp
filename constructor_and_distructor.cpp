#include <iostream>
using namespace std;

class Demo {
    int value;

public:
    // Default Constructor
    Demo() {
        value = 0;
        cout << "Default Constructor called. Value = " << value << endl;
    }

    // Parameterized Constructor
    Demo(int v) {
        value = v;
        cout << "Parameterized Constructor called. Value = " << value << endl;
    }

    // Copy Constructor
    Demo(const Demo &obj) {
        value = obj.value;
        cout << "Copy Constructor called. Value = " << value << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called. Value = " << value << endl;
    }
};

int main() {
    cout << "Creating object1 using default constructor..." << endl;
    Demo object1;

    cout << "\nCreating object2 using parameterized constructor..." << endl;
    Demo object2(42);

    cout << "\nCreating object3 using copy constructor (copy of object2)..." << endl;
    Demo object3(object2);

    cout << "\nExiting main, destructors will be called automatically..." << endl;
    return 0;
}
