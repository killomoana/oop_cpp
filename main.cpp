#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }

    void func() { cout << "Function func() of class Base\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "Construct Child object\n"; }
    ~Child() { cout << "Destruct Child object\n"; }
};

class Point
{
protected:
    double x, y;
    virtual void Show()=0;
public:
    Point():x(0),y(0) {}
    Point(double x, double y): x(x),y(y) {}
    double GtX()
    {
        return x;
    }
    double GtY()
    {
        return y;
    }
};

class PointSpace:public Point
{
protected:
    Point *ss;
    double z;
public:
    PointSpace(): Point(), z(0){}
    PointSpace(double x, double y, double z): Point(x,y), z(z) {}
    
    void Show()
    {
	cout<< x << ", " << y << ", " << z << endl;
    }
};

int main(int argc, char *argv[])
{
    cout << "* Create Object base" << endl;
    Base base;

    cout << "* Create Object child" << endl;
    Child child;

    cout << "* Call method func() for object base" << endl;
    base.func();

    cout << "* Call method func() for object child" << endl;
    child.func();

    return 0;
}
