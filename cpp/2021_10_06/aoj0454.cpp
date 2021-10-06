#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int num = 0;

    if(a==b){
        if(c==d){
            num = 1;
        }
    } else if(a==c){
        if(b==d){
            num = 1;
        }
    } else if(a==d){
        if(b==c){
            num = 1;
        }
    }

    cout << num << endl;
    return 0;
}