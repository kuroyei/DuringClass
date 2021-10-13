// https://atcoder.jp/contests/joi2022yo1a/tasks/joi2022_yo1a_d

#include <iostream>
using namespace std;

// input
// (N個の宝箱) (M個の鍵)
// (箱それぞれに書かれた整数N個)
// (鍵それぞれに書かれた整数M個)

// output
// 開けられる宝箱数 のmax

int main(){
    int numOfChests,numOfKeys;
    cin >> numOfChests >> numOfKeys;
    int chests[numOfChests];
    for(int inp0=0;inp0<numOfChests;inp0++){
        cin >> chests[inp0];
    }
    int keys[numOfKeys];
    for(int inp1=0;inp1<numOfKeys;inp1++){
        cin >> keys[inp1];
    }

    // 鍵1で何個，鍵2で何個... 既出はスキップ

    int canOpen = 0;

    // iはkeys
    for(int i=0;i<numOfKeys;i++){
        // keys[i]が既出 => skip
        bool already = false;
        for(int j=0;j<i;j++){
            if(keys[i] == keys[j]){
                already = true;
                break;
            }
        }
        if(already == true){
            continue;
        }

        // kはchests
        for(int k=0;k<numOfChests;k++){
            if(keys[i] == chests[k]){
                canOpen++;
                // test
                // cout << "keys[" << i << "] and chests[" << k << "] are same" << endl;
            }
        }

    }

    cout << canOpen << endl;

    return 0;
}