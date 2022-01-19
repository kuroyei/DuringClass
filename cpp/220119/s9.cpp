#include <iostream>
using namespace std;

// use reference, we can swap without pointer

void swap(int& x, int& y); // x,yそれぞれ引数を参照するようになる メモリアドレスは引数1=x, 引数2=y

int main(){
    int num1 = 5;
    int num2 = 10;

    cout << "(num1, num2) = (" << num1 << ", " << num2 << ')' << endl;

    swap(num1, num2);

    cout << "swap(num1, num2);" << endl;
    cout << "(num1, num2) = (" << num1 << ", " << num2 << ')' << endl;

    return 0;
}

void swap(int& x, int& y){
    int tmp = x;
    x = y;
    y = tmp;
}