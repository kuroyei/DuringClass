#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

int main(){
    // pi/4 = 0.25pi
    double x = 60;
    double rad = (60 * PI) / 180;
    cout << "If 1/3 pi, " << sin(rad) << ' ' << cos(rad) << ' ' << tan(rad) << endl;
    return 0;
}