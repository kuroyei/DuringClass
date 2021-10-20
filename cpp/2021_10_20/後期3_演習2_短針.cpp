#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int num = (a+b)%12;
    if(num==0){
        cout << 12 << endl;
    } else {
        cout << num << endl;
    }

    return 0;
}