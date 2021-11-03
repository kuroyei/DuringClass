// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_D&lang=ja

#include <iostream>
using namespace std;

int main(){
    // input N
    // i 1 -> x = i;
    // xは3で割り切れるか？ -> できたら output i; i+1が入力値N以下であれば再び


    int N;
    cin >> N;
    int i = 1;

    while(1){
        int x = i;
        if(x%3 == 0){
            cout << " " << i;

            if(i++ > N){
                break;
            }
        }else if(x%10 == 3){
            cout << " " << i;
            if(i++ > N){
                break;
            }
            x/=10;
            
        }
    }

}