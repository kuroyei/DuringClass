#include <iostream>
using namespace std;

void swap(int* pX, int* pY);

int main(){
    int num1 = 5;
    int num2 = 10;

    cout << "(num1, num2) = (" << num1 << ", " << num2 << ')' << endl;

    swap(&num1, &num2); // addressが関数に渡されることを参照渡しという

    cout << "(num1, num2) = (" << num1 << ", " << num2 << ')' << endl;

    return 0;
}

void swap(int* pX, int* pY){
    int tmp = *pX;
    *pX = *pY;
    *pY = tmp;
}