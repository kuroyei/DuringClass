// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0381&lang=ja

#include <iostream>
using namespace std;

int main(){
    int x1,x2;
    cin >> x1 >> x2;
    cout << ((x1-x2)>=0?(x1-x2):(x2-x1)) << endl;
    return 0;
}