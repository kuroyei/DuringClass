#include <iostream>
using namespace std;

int square(int x)
{
    return x*x;
}
double square(double x)
{
    return x*x;
}

int main()
{
    cout << "整数を入力してください。" << endl;
    int integer;
    cin >> integer;
    cout << integer << "の2乗は" << square(integer) << "です。" << endl;
    cout << "小数を入力してください。" << endl;
    double decimal;
    cin >> decimal;
    cout << decimal << "の2乗は" << square(decimal) << "です。" << endl;
    return 0;
}