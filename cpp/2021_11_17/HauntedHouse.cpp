#include <iostream>
using namespace std;

int main(){
    int am,pm;
    cout << "午前の人数：";
    cin >> am;
    cout << "午後の人数：";
    cin >> pm;

    cout << "総数は" << am+pm << "人、収入は" << 200*am + 300*pm << "円です。" << endl;

    return 0;
}