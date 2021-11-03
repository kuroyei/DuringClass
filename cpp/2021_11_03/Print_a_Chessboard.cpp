// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_C&lang=ja

#include <iostream>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(i%2==0){
                if(j%2==0){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }else{
                if(j%2==0){
                    cout << ".";
                }else{
                    cout << "#";
                }
            }
        }
        cout << endl;
    }

    return 0;
}