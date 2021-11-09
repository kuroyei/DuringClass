#include <iostream>
using namespace std;

int main(){
    int test[5];

    cout << "Please input 5 scores\n";
    for(int i=0;i<5;i++){
        cin >> test[i];
    }

    for(int s=0;s<4;s++){
        for(int t=s+1;t<5;t++){ // 前のfor文より1多い
            if(test[s]<test[t]){
                // exchange elements
                int tmp = test[s]; // tmp: 情報を一時的に保存するための変数
                test[s] = test[t];
                test[t] = tmp;                
            }
        }
    }

    for(int j=0;j<5;j++){
        cout << j + 1;
        switch ((j+1)%10)
        {
            case 1:
                cout << "st";
                break;
            case 2:
                cout << "nd";
                break;
            case 3:
                cout << "rd";
                break;
            default:
                cout << "th";
                break;
        }
        cout << " place person's score is " << test[j] << endl;

    }

    return 0;
}