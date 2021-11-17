#include <iostream>
using namespace std;

int main(){
    int Ascores[4],Asum = 0;
    for(int i=0;i<4;i++){
        cin >> Ascores[i];
        Asum+=Ascores[i];
    }
    int Bscores[4],Bsum = 0;
    for(int i=0;i<4;i++){
        cin >> Bscores[i];
        Bsum+=Bscores[i];
    }

    if(Asum >= Bsum){
        cout << Asum;
    }
    else {
        cout << Bsum;
    }

    return 0;
}