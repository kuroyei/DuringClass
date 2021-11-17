#include <iostream>
using namespace std;

int main(){
    int res;
    cin >> res;

    if(res==1){
        cout << "1が入力されました。" << endl;
    } else if(res==2){
        cout << "2が入力されました。" << endl;
    } else{
        cout << "1か2を入力してください。" << endl;
    }

    return 0;
}