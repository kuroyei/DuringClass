#include <iostream>
using namespace std;

int main(){
    int m,f,b;
    cin >> m >> f >> b;

    if(m >= b) cout << '0';
    else if(m < b && m + f >= b) cout << b - m;
    else cout << "NA";
    cout << endl;

    return 0;
}