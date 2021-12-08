// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_B&lang=ja

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

int square(int n){
    return n*n;
}

int main(){
    int a,b,degreeC;
    cin >> a >> b >> degreeC;
    double C = degreeC * PI / 180;

    double h = b * sin(C);
    double S = (a*h)/2;
    double c = sqrt(square(a) + square(b) - 2*a*b*cos(C));
    double L = a+b+c;

    cout << S << endl << L << endl << h << endl;
    return 0;
}