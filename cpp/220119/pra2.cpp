#include <iostream>
using namespace std;

void add(int& rA,int& rB,int a);

int main(){
    int x1,x2,a;
    cin >> x1 >> x2 >> a;

    add(x1,x2,a);

    cout << "(x1, x2) = (" << x1 << ", " << x2 << ')' << endl;

    return 0;
}

void add(int& rA,int& rB,int a){
    rA += a;
    rB += a;
}

