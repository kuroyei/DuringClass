#include <iostream>
using namespace std;

int factorial(int x)
{
    int ans = 1;
    for(int i=0;i<x;i++){
        ans*=(x-i);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}