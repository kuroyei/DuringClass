#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Please input number. (1<=number<=9)" << endl << ">> ";
    cin >> num;

    try{
        if(num <= 0)
            throw "Inputed number <=0";
        if(num >= 10)
            throw "Inputed number >=10";

        cout << num << '.' << '\n';
    }

    catch(char* err){
        cout << "Error: " << err << '\n';
        return 1;
    }

    return 0;
}