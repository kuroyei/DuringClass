#include <iostream>
using namespace std;

int length(char* str){
    int cnt = 0;
    for(int i=0;i<100;i++){
        if(str[i] == '\0'){
            cnt = i;
            break;
        }
    }
    return cnt;
}

int main(){
    char str[100];
    cin >> str;
    cout << length(str) << endl;
    return 0;
}