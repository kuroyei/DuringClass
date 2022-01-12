#include <iostream>
using namespace std;

int main(){
    int x=5,y=10;
    int *pX,*pY;
    pX = &x; pY = &y;

    int tmp = *pX;
    *pX = *pY;
    *pY = tmp;

    // <!-- test -->
    // cout << *pX << ',' << *pY << endl;
    // cout << x << ',' << y << endl;

    return 0;
}