// https://atcoder.jp/contests/joi2022yo1a/tasks/joi2022_yo1a_d

#include <iostream>
using namespace std;

// input
// (N個の宝箱) (M個の鍵)
// (N個の整数A A1,A2,...,Ai)
// (M個の整数B B1,B2,...,Bj)

// output
// 開けられる宝箱数 のmax

int main(){
    int NumOfChests,NumOfKeys;
    int Chests[NumOfChests];
    int Keys[NumOfKeys];
    for(int iInp=0;iInp<NumOfChests;iInp++){
        cin >> Chests[iInp];
    }
    for(int jInp=0;jInp<NumOfKeys;jInp++){
        cin >> Keys[jInp];
    }

    // 配列Keys中の要素の重複をなくす
    

}