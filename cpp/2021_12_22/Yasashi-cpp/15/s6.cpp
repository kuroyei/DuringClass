#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vt;
    for(int i=0;i<10;i++){
        vt.push_back(i);
    }

    cout << "Before sort: ";
    vector<int>::iterator it = vt.begin();
    while(it != vt.end()){
        cout << *it;
        it++;
    }
    cout << '.' << endl;

    cout << "Reerse order: ";
    reverse(vt.begin(), vt.end());
    it = vt.begin();
    while(it != vt.end()){
        cout << *it;
        it++;
    }
    cout << '.' << endl;

    cout << "After sort: ";
    sort(vt.begin(), vt.end());
    it = vt.begin();
    while(it != vt.end()){
        cout << *it;
        it++;
    }
    cout << '.' << endl;

    return 0;
}