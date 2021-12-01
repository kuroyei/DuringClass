// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0174

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    for(int i=0;i<20;i++){
        char records[101];
        int a = 0;
        int b = 0;

        // A -> Aがサーブした, B -> Bがサーブした
        // 出力はサーブした数ではなく得点である

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

/*
ABAABBBAABABAAABBAA
    start from A
    1st Game (i == 0) *** (i%3 == 0)
    N of A == 11, B == 8
    output 11 8
AABBBABBABBAAABABABAAB
    start from A because end of 1st Game is A
    2nd Game (i == 1)
    N of A == 11, B == 11
    output 10 12 (B++;A--;)
BABAABAABABABBAAAB
    Start from B because end of 2nd Game is B
    3rd Game (i == 2)
    N of A == 10, B == 8
    output 11 7 (A++;B--;)
AABABAAABBAABBBABAA
    1st Game (i == 3) ***
    N of A == 11, B == 8
    output 11 8
AAAAAAAAAAA
    Start from A because end of 1st Game is A
    2nd Game (i == 4)
    N of A == 11, B == 0
    output 11 0 (B == 0 -> do not touch)
ABBBBBBBBBB
    Start from A because end of 2nd Game is A
    3rd Game (i == 5)
    N of A == 1, B== 10
    output 0 11 (B++;A--;)
0

When ***{
    N of A, B == Output
}
else{
    if(N of A != 0 || N of B != 0) 全部同じ文字であれば文字数に等

        if(rec[0] == 'A'){
            b++;
            a--;
        }
        if(rec[0] == 'B'){
            a++;
            b--;
        }


}


sum is number of times of played
count number of B
if(!(0 or 3の倍数) && (str[0] == A))
    B++;

*/
