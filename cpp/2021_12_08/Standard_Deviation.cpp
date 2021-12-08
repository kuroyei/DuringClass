// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_C&lang=ja

#include <iostream>
#include <cmath>
using namespace std;

int square(int n){
    return n*n;
}

int main(){
    while(1){
        int num; // number of data
        cin >> num;

        if(num==0) break;

        int* scores;
        scores = new int[num];

        // average
            int sum = 0;
            for(int i=0;i<num;i++){
                int inp;
                cin >> inp;
                scores[i] = inp;
                sum+=inp;
            }
            double average = sum/num;
            
        // Σdeviation^2 / num
            int sumOfSigma2th = 0;
            for(int i=0;i<num;i++){
                sumOfSigma2th += square(scores[i] - average);
            }
        
        cout << sqrt(sumOfSigma2th/num) << endl;

        delete[] scores;
    }

    return 0;
}