#include <iostream>
using namespace std;

double avg(int t[]);

int main(){
    int test[5] = {80,60,55,22,75};
    // cout << "test = " << test << '.' << endl;
    // cout << "*test = " << *test << '.' << endl;
    cout << avg(test) << endl;
    return 0;
} 

double avg(int t[]){
    double sum = 0;
    for(int i=0; i<5; i++){
        sum += t[i];
    }
    return sum/5;
}