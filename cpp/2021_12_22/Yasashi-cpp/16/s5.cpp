#include <iostream>
using namespace std;

int main()
{
    double pi = 3.141592;
    int num;
    
    cout << "Print pi." << endl;
    cout << "Please input the number of significant digits. (1-7)" << endl << ">> ";
    cin >> num;

    cout.precision(num);

    cout << "Pi is " << pi << '.' << endl;

    return 0;
}