#include <iostream>
using namespace std;
//BY VALUE

void val(int a){
    a = 100;
}

//BY ADDRESS
void add(int *a){
    *a = 100;
}

//BY REFERENCE

void reff(int &a){
    a = 100;
}
int main() {
    int x = 5;
    int y = 5;
    int z = 5;

    val(x);
    add(&y);
    reff(z);
    cout << "Value of x after calling val: " << x << endl; 
    cout << "Value of y after calling add: " << y << endl; 
    cout << "Value of z after calling reff: " << z << endl; 

    return 0;
}