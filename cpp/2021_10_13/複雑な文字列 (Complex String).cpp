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

    char input[5] = {'A', 'B', 'C', 'D', 'E'};
    bool doesExist[5] = {0,0,0,0,0};

    for(int j=0;j<length;j++){
        for(int k=0;k<5;k++){
            if(string[j] == input[k]){
                doesExist[k] = 1;
            }
        }
    }

    int sumOfDoesExist = 0;
    for(int l=0;l<5;l++){
        if(doesExist[l] == true){
            sumOfDoesExist++;
        }
    }

    if(sumOfDoesExist >= 3){
        cout << "Yes";
    } else {
        cout << "No";
    }

    cout << endl;

    return 0;
}