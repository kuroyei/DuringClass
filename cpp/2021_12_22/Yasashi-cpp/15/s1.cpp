#include <iostream>
using namespace std;

class Point{
    private:
        int x; int y;
    public:
        Point(int a = 0, int b = 0){x = a; y = b;}
        void setX(int a){x = a;}
        void setY(int b){y = b;}
        void show(){cout << "(x, y) = (" << x << ", " << y << ')' << endl;}
        Point operator++();
        Point operator++(int d); // if there is argument
        friend Point operator+(Point p1, Point p2);
        friend Point operator+(Point p, int a);
        friend Point operator+(int a, Point p);
};

Point Point::operator++()
{
    x++;
    y++;
    return *this;
}
Point Point::operator++(int d)
{
    Point p = *this;
    x++;
    y++;
    return p;
}

Point operator+(Point p1, Point p2)
{
    Point tmp;
    tmp.x = p1.x + p2.x;
    tmp.y = p1.y + p2.y;
    return tmp;
}
Point operator+(Point p, int a)
{
    Point tmp;
    tmp.x = p.x + a;
    tmp.y = p.y + a;
    return tmp;
}
Point operator+(int a, Point p)
{
    Point tmp;
    tmp.x = a + p.x;
    tmp.y = a + p.y;
    return tmp;
}

int main()
{
    Point p1(1,2);
    Point p2(3,6);
    cout << "<!-- Defined -->" << endl;
    p1.show(); p2.show();

    p1 = p1+p2;
    cout << "<!-- p1 + p2 -->" << endl;
    p1.show(); p2.show();

    p1++;
    cout << "<!-- p1++ -->" << endl;
    p1.show(); p2.show();

    p1 = p1+3;
    cout << "<!-- p1 + 3 -->" << endl;
    p1.show(); p2.show();

    p2 = 3+p2;
    cout << "<!-- 3 + p2 -->" << endl;
    p1.show(); p2.show();

    return 0;
}