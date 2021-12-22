#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    vector<int> vt;

    cout << "How many integers do you input?" << endl;
    cin >> num;

    for(int i=0; i<num; i++){
        int data;
        cout << "Please input an integer." << endl << ">> ";
        cin >> data;
        vt.push_back(data); // 末尾に
    }

    cout << "Display." << endl;
    vector<int>::iterator it = vt.begin();
    while(it != vt.end()){
        cout << *it;
        cout << '-';
        it++;
    }
    cout << endl;
}