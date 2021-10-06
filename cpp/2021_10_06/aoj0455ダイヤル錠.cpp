// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0455

#include <iostream>
using namespace std;

int main(){
    int digits;
    cin >> digits;
  
    int pin[digits];
    for(int i=0;i<digits;i++){
        cin >> pin[i];
    }
    
    int dif = 0;
  	int num = pin[0];
    
    // 桁数-1回，加算が行われたら良い
    for(int j=0;j<=digits-2;j++){
        // pin[j], pin[j+1] 間の差を求める
        if(pin[j] < pin[j+1]){
            dif = pin[j+1] - pin[j];
        } else {
            dif = pin[j] - pin[j+1];
        }
        // 1 <= dif <= 9

        // dif <= 5 であれば採用
        if(dif <= 5){
            num += dif;
        } else {
            // 数が dif > 5 に存在する場合
            num += 5 - (dif - 5);
        }
    }

    cout << num << endl;
  	return 0;
}