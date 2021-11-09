// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_A&lang=ja

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100]; // 大きめに宣言．宣言時に配列要素数を変数で指定できるのは，一部のコンパイラの拡張機能
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int j=n-1;j>=0;j--){
        cout << a[j] << ' ';
    }

    cout << endl;
    return 0;
}

// キーボードから入力した値を要素数にしたい
// https://teratail.com/questions/166610