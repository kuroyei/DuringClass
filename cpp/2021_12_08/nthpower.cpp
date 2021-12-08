#include <iostream>
using namespace std;

int main(){
    int a,r;
    cin >> a >> r;
    int ans = 1;
    for(int i=0;i<r;i++){
        ans*=a;
    }
    cout << a << '^' << r << " = " << ans << endl;

    return 0;
}