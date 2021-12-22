#include <iostream>
using namespace std;

int main()
{
    int i;
    double d;
    char str[100];

    cout << "Please input an integer." << endl << ">> ";
    cin >> i;
    cout << "Please input a decimal." << endl << ">> ";
    cin >> d;
    cout << "Please input a string." << endl << ">> ";
    cin >> str;

    cout << "Inputed integer is " << i << '.' << endl;
    cout << "Inputed decimal is " << d << '.' << endl;
    cout << "Inputed string is " << str << '.' << endl;

    return 0;
}