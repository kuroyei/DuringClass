// https://www.ioi-jp.org/joi/2021/2022-yo1/2022-yo1b-t3.html

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char str[n];
    for(int i=0;i<n;i++){
        cin >> str[i];
    }

    for(int j=0;j<n;j++){
        if(str[j+1] == 'J'){
            cout << str[j] << endl;
        }
    }

    return 0;
}