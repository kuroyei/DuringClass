#include <bits/stdc++.h>
using namespace std;

int main(){

    // int型の2次元配列(3*4要素)の宣言
    // vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))
    vector<vector<int>> data(3, vector<int>(4));

    // 入力
    for(int i=0;i<3;i++){
        for(int j=0;i<4;j++){
            cin >> data.at(i).at(j);
        }
    }

    // "0"の個数を数える
    int count = 0;

    for(int i=0;i<3;i++0{
        for(int j=0;j<4;j++){
            // 上からi番目，左からj番目の画素が0かを判定
            if(data.at(i).at(j) == 0){
                count++;
            }
        }
    })

    cout << count << endl;
}