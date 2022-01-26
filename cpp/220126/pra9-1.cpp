#include <iostream>
using namespace std;

int max(int x[]);

int main(){
    int n[5];
    for(int i=0;i<5;i++){
        cin >> n[i];
    }
    cout << max(n) << endl;
    return 0;
}

int max(int x[]){
    int n = x[0];
    for(int i=1;i<5;i++){
        if(n < x[i]) n = x[i];
    }
    return n;
}