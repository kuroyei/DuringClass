// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_D&lang=ja

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int matrixNM[100][100];
    int vectorM[100];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin  >> matrixNM[i][j];
        }
    }
    for(int i=0;i<m;i++){ // iでも良いか
        cin >> vectorM[i];
    }

    for(int i=0;i<n;i++){
        int c = 0;
        for(int j=0;j<m;j++){
            c += matrixNM[i][j] * vectorM[j];
        }
        cout << c << endl;
    }

    return 0;
}