#include <iostream>
using namespace std;

int main(){
    int sides[3];
    cout << "3辺の長さを入力してください。" << endl;
    for(int i=0;i<3;i++){
        cin >> sides[i];
        sides[i]*=sides[i];
    }

    if(
        sides[0] == sides[1] + sides[2] ||
        sides[1] == sides[0] + sides[2] ||
        sides[2] == sides[0] + sides[1]
    )       cout << "直角三角形です。";
    else    cout << "直角三角形ではありません。";
    cout << endl;

    return 0;
}