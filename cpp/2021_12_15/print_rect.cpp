#include <iostream>
using namespace std;

void print_rect(int H, int W);

int main()
{
    int x,y;
    cin >> x >> y;
    print_rect(x,y);
    cout << endl;
    return 0;
}

void print_rect(int H, int W)
{
    for(int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)
        {
            cout << '#';
        }
        cout << endl;
    }
}