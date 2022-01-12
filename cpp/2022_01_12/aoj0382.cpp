// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0382&lang=ja

#include <iostream>
using namespace std;

int main(){
    int N,C,sumC=0;
    cin >> N >> C;
    N++;
    for(int i=0;i<C;i++){
        int tmp;
        cin >> tmp;
        sumC += tmp;
    }
    cout << ((sumC%N==0)?(sumC/N):(sumC/N+1)) << endl;
    return 0;
}

/*
5 4
5 5 6 5
-> 4
6 people, 21 cakes
21/6=3.5
21%6=3

余り!=0 -> rslt(/) + 1

7 5
8 8 8 8 8
-> 5
40/8=5
40%8=0

余り=0 -> rslt(/)

100 3
3 3 3
-> 1
9/101=0.08
9%101=9

余り!=0 -> rslt(/) + 1
*/