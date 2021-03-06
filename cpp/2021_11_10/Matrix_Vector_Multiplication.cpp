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
    for(int k=0;k<m;k++){ // iでも良いか
        cin >> vectorM[k];
    }

    for(int l=0;l<n;l++){
        int c = 0;
        for(int o=0;o<m;o++){
            c += matrixNM[l][o] * vectorM[o];
        }
        cout << c << endl;
    }

    return 0;
}