// https://atcoder.jp/contests/joi2022yo1a/tasks/joi2022_yo1a_c

#include <iostream>
using namespace std;

int main(){
    int length;
    cin >> length;

    char string[length];
    for(int i=0;i<length;i++){
        cin >> string[i];
    }

    int Is3orMore = 0;

    // 文字列数から引く もし同じ文字があれば

    int NumOfKinds = length;

    for(int j=0;j<length;j++){
        for(int k=0;k<length;k++){
            if(j != k){
                if(string[j] == string[k]){
                    NumOfKinds--;
                }
            }
        }
    
        if(NumOfKinds >= 3){
            Is3orMore = 1;
            break;
        }
    }

    if(Is3orMore != 0){
        cout << "Yes";
    } else {
        cout << "No";
    }

    cout << endl;

    return 0;
}