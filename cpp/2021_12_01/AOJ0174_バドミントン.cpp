// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0174

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    for(int i=0;i<20;i++){
        char records[101];
        int a = 0;
        int b = 0;

        cin >> records;

        if(records[1] == '\0'){
            break;
        }

        for(int j=0; records[j] != '\0'; j++){
            if(records[j] == 'B'){
                b++;
            }
        }

	    a = strlen(records) - b;

        if((i%3 != 0)&&(a != 0)&&(b != 0)){
            if(records[0] == 'A'){
                b++;
                a--;
            } else {
                a++;
                b--;
            }	
    	}

        cout << a << ' ' << b << endl;
    
	}
	return 0;
}

