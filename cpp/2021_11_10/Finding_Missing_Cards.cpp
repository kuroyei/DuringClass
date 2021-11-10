// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_B&lang=ja

#include <iostream>
using namespace std;

int main(){
    // 入力を2次元配列に代入
    // for(1 - 13)で，無い数を見つけ，出力する

    char suits[4] = {'S', 'H', 'C', 'D'};

    bool cards[4][13]; // [13]の要素は全て0
    for(int suitIni=0;suitIni<4;suitIni++){
        for(int rankIni=0;rankIni<13;rankIni++){
            cards[suitIni][rankIni] = false; 
        }
    }
    
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        char suit;
        int rank;
        cin >> suit >> rank;
        rank--;

        switch (suit){
            case 'S':
                cards[0][rank] = true;
                break;
            case 'H':
                cards[1][rank] = true;
                break;
            case 'C':
                cards[2][rank] = true;
                break;
            case 'D':
                cards[3][rank] = true;
                break;
        }
        
    }
    
    // cout << "-----output-----" << endl;

    for(int j=0;j<4;j++){
        for(int k=0;k<13;k++){
            if(cards[j][k] == false){
                cout << suits[j] << ' ' << k+1 << endl;
            }
        }
    }

    return 0;
}