#include <iostream>
using namespace std;

int main(){
    int res;
    cin >> res;

    if(res == 1){
        cout << "1 が入力されました。" << endl;
    }
    else if(res == 2){
        cout << "2 が入力されました。" << endl;
    }
    else{
        cout << "1 か 2 を入力してください。" << endl;
    }

    return 0;
}