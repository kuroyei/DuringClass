#include <iostream>
using namespace std;

void swap(int *pX,int *pY);

int main(){
    int num1 = 5, num2 = 10;

    cout << "num1: " << num1 << '.' << endl;
    cout << "num2: " << num2 << '.' << endl;

    swap(&num1,&num2);

    cout << "num1: " << num1 << '.' << endl;
    cout << "num2: " << num2 << '.' << endl;

    return 0;
}

void swap(int *pX,int *pY){
    int tmp = *pX;
    *pX = *pY;
    *pY = tmp;
}

// このような場面でポインタは役に立つ