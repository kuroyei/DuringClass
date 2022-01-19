#include <iostream>
using namespace std;

void add(int* x1, int* x2, int a);

int main(){
    int x1,x2,a;
    cin >> x1 >> x2 >> a;

    // cout << "(x1, x2) = (" << x1 << ", " << x2 << ')' << endl;

    add(&x1,&x2,a);

    // cout << "(x1, x2) + a" << endl;
    cout << "(x1, x2) = (" << x1 << ", " << x2 << ')' << endl;
    
    return 0;
}

void add(int* x1, int* x2, int a){
    *x1 += a;
    *x2 += a;
}