// indexは割ったあまり

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char find[10];
    cin >> find;
    int lenFind = strlen(find);

    int num;
    cin >> num;

    int ctr = 0;

    for(int i=0; i<num; i++){
        char str[10];
        cin >> str;

        for(int j=0; j<10; j++){
            for(int k=0; k<lenFind; k++){
                if(find[k] != str[(j+k)/lenFind]){
                    cout << "Run break. i,j,k=" << i << ',' << j << ',' << k << endl;
                    break;
                }
                if(k == strlen(find)-1){
                    ctr++;
                }
            }
        }
    }

    cout << ctr << endl;
    return 0;
}