#include <iostream>
using namespace std;

void ordinal(int n){
    switch (n%10){
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
    }


}

int main(){
    const int sub = 2;
    const int num = 5;
    int test[sub][num];
    for(int i=0;i<sub;i++){
        for(int j=0;j<num;j++){
            cin >> test[i][j];
        }
    }

    for(int k=0;k<sub;k++){
        for(int l=0;l<num;l++){
            cout << l+1;
            ordinal(l+1);
            cout << " person's test score of ";
            if(k==0){
                cout << "Japanese is " << test[0][l] << "." << endl;
            } else {
                cout << "Math is " << test[1][l] << "." << endl;
            }
            
        }
    }

    return 0;
}