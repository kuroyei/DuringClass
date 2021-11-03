// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_B&lang=ja

#include <iostream>
using namespace std;

int main(){
    int H,W;
    
    while(1){
        cin >> H >> W;

        if(H==0 && W==0){
            break;
        }

        for(int i=0;i<H;i++){
            cout << "#";

            for(int j=0;j<W-2;j++){
                if(i==0 || i==H-1){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }

            cout << "#" << endl;
        }
    }

    return 0;
}