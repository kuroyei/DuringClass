// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_A&lang=ja

#include <iostream>
#include <cmath>
using namespace std;

struct point{
    double x;
    double y;
};

double square(double n){
    return n*n;
}

int main(){
    point p1;
    point p2;

    cin >> p1.x >> p1.y >> p2.x >> p2.y;
    cout << sqrt(square(p1.x - p2.x) + square(p1.y - p2.y)) << endl;

    return 0;
}