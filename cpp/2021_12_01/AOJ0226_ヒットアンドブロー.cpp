// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0226

#include <iostream>
using namespace std;

int main(){
    char nStr1s[5];
    char nStr2s[5];

    while(1){
        cin >> nStr1s;
        cin >> nStr2s;
        int hit = 0;
        int blow = 0;

        if(nStr1s[1] == '\0'){
            break;
        }


        for(int i=0; i<4; i++){ // before \0
            if(nStr1s[i] == nStr2s[i]){
                hit++;
            }else{
                for(int j=0; j<4; j++){
                    if(i != j && nStr1s[i] == nStr2s[j]){
                        blow++;
                    }
                }
            }

        }

        cout << hit << ' ' << blow << endl;
    }

    return 0;

}