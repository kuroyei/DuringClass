// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_D&lang=ja#

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // １乗根，２乗根，３乗根，無限乗根
    int num;
    cin >> num;

    // x座標配列
    int* xs = new int[num];
    for(int i=0;i<num;i++){
        cin >> xs[i];
    }

    // y座標配列
    int* ys = new int[num];
    for(int i=0;i<num;i++){
        cin >> ys[i];
    }

    // 絶対値
    int* absolutes = new int[num];
    int maxOfAbsolute;
    for(int i=0;i<num;i++){
        absolutes[i] = fabs(xs[i] - ys[i]);

        // p = infinite の為にmaxも求める
        if(i==0){
            maxOfAbsolute = absolutes[1];
        } else if(maxOfAbsolute < absolutes[i]) {
            maxOfAbsolute = absolutes[i];
        }
    }

    // 1,2,3乗根
    for(double p=1;p<=3;p++){
        int inRoot = 0;
        for(int i=0;i<num;i++){
            inRoot += pow(absolutes[i], p);
        }

        cout << pow(inRoot, 1/p) << endl;
    }

    // 無限乗根
    cout << maxOfAbsolute << endl;

    delete[] xs;
    delete[] ys;
    delete[] absolutes;
    return 0;
}
