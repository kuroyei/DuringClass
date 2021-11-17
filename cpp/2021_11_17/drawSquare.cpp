#include <iostream>
using namespace std;

int main(){
    int v,h;
    cout << "たて？：";
    cin >> v;
    cout << "よこ？：";
    cin >> h;

    for(int i=0;i<v;i++){
        for(int j=0;j<h;j++){
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}