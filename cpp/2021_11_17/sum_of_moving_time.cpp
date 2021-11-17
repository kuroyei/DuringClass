#include <iostream>
using namespace std;

int main(){
    int until1st, until2nd, untilHome;
    cout << "1 つ目の店まで：";
    cin >> until1st;
    cout << "2 つ目の店まで：";
    cin >> until2nd;
    cout << "家まで：";
    cin >> untilHome;

    int sumOfSec = until1st + until2nd + untilHome;
    cout << "合計は" << sumOfSec / 60 << "分" << sumOfSec % 60 << "秒です。" << endl;

    return 0;
}