#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "Construct Child object\n"; }
    ~Child() { cout << "Destruct Child object\n"; }
};

class Figure()
{
protected:
    unsigned double a, b;
    virtual void Show()=0;
};

int main(int argc, char *argv[])
{
    cout << "* Create Object child" << endl;
    Child child;

    return 0;
}
