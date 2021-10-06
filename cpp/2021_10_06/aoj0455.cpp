#include <iostream>
using namespace std;

int main(){
    int digits = 0;
    int pin[digits];
    int num = 0;
    
    cin >> digits;
    for(int i=0;i<digits;i++){
        cin >> pin[i];
    }
    
    num+=pin[0];
    for(int j=1;j<digits;j++){
        if(pin[j-1] < pin[j]){
            num+=pin[j]-pin[j-1];
        } else {
            num+=pin[j-1]-pin[j];
        }
    }

    cout << num << endl;
}