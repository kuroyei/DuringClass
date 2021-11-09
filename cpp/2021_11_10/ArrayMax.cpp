#include <iostream>
using namespace std;

int sample(){
    //int main(){
        const int N=10; // N個
        int x[N]; // N個の値を⼊れる配列
        for (int i=1; i<N; i++){ // N個の値を⼊⼒する
        cin >> x[i];
        }
        int max = x[0]; //仮の最⼤値を0番⽬の値にする
        for (int i=1; i<N; i++){
        if (x[i] < max){
        max = x[i];
        }
        }
        cout << max << endl;
        return 0;
    //}
}

int main(){
    int num[10];
    int max;
    int nOfElements = sizeof(num)/sizeof(int);
    for(int i=0;i<nOfElements;i++){ // https://marycore.jp/prog/c-lang/countof-array-and-sentinel-value/
        cin >> num[i];
    }

    max = num[0];
    for(int j=1;j<nOfElements;j++){
        if(num[j] > num[0]){
            max = num[j];
        }
    }

    cout << "max is " << max << endl;

    return 0;
    
}