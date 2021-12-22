#include <iostream>
#include <cstring>
using namespace std;

class Car{
    private:
        int num;
        double gas;
        char* pName;
    public:
        Car(char* pN, int n, double g);
        ~Car();
        Car(const Car& c);
        Car& operator=(const Car& c);  
};

Car::Car(char* pN, int n, double g)
{
    pName = new char[strlen(pN)+1];
    strcpy(pName, pN);
    num = n;
    gas = g;
    cout << "Created " << pName << endl;
}
Car::~Car()
{
    cout << "Delete " << pName << endl;
    delete[] pName;
}
Car::Car(const Car& c)
{
    cout << "Initialize as " << c.pName << endl;
    pName = new char[strlen("Copy of ") + strlen(c.pName) + 1];
    strcpy(pName, c.pName);
    strcat(pName, "の copy1.");
    num = c.num;
    gas = c.gas;
}
Car& Car::operator=(const Car& c)
{
    cout << pName << "に" << c.pName << "を代入します．" << endl;
    if(this != &c){
        delete[] pName;
        pName = new char[strlen(c.pName)+strlen("の copy2.") + 1];
        strcpy(pName, c.pName);
        strcat(pName, "の copy2.");
        num = c.num;
        gas = c.gas;
    }
    return *this;
}

int main()
{
    Car mycar("mycar", 1234, 25.5);
    Car car1 = mycar;
    Car car2("car2", 0, 0);
    car2 = mycar;

    return 0;
}