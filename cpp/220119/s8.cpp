#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int& rA = a; // 参照 reference

    cout << "(a, rA) = (" << a << ", " << rA << ')' << endl;

    rA = 50;

    cout << "rA = 50;" << endl;
    cout << "(a, rA) = (" << a << ", " << rA << ')' << endl;
    cout << "(&a, &rA) = (" << &a << ", " << &rA << ')' << endl;

    return 0;
}