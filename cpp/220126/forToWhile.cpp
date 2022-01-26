#include <iostream>
using namespace std;

int main(){
    int test[5] = {80,60,22,50,75};
    // int i=4;
    // while(i>=0){
    //     cout << test[i];
    //     cout << ',';
    //     i--;
    // }
    for(int i=4; i>=0; i--){
        cout << test[i];
        if(i!=0) cout << ',';
    }
    cout << '\n';
    return 0;
}