// https://atcoder.jp/contests/joi2022yo1a/tasks/joi2022_yo1a_b

#include <iostream>
using namespace std;

int main(){
    int AtoB, BtoC, timeLimit;

    cin >> AtoB >> BtoC >> timeLimit;

    if(AtoB + BtoC <= timeLimit + 0.5){
        cout << 1;
    } else {
        cout << 0;
    }

    cout << endl;

    return 0;
}