#include <iostream>
#include <string>
using namespace std;

int main(){
    int X;
    cin >> X;

    string days[7] = {"sat","sun","mon","tue","wed","thu","fri"};

    cout << days[ (X >= 9) ? (X-9)%7 : (7 + (X-9)%7) ] << endl;

    return 0;
}