// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_D&lang=ja#

#include <iostream>
#include <cmath>
using namespace std;

int rthPower(int a,int r){
    int ans = 1;
    for(int i=0;i<r;i++){
        ans*=a;
    }
    return ans;
}

int main(){
    // １乗根，２乗根，３乗根，無限乗根
    int num;
    cin >> num;

    // x座標配列
    int* xCoordinates = new int[num];
    for(int i=0;i<num;i++){
        cin >> xCoordinates[i];
    }

    // y座標配列
    int* yCoordinates = new int[num];
    for(int i=0;i<num;i++){
        cin >> yCoordinates[i];
    }

    // １乗根
    int insideRadical = 0;
    for(int i=0;i<num;i++){
        insideRadical+=fabs(xCoordinates[i] - yCoordinates[i]);
    }

}