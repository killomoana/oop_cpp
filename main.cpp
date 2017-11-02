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

    void func() { cout << "Function func() of class Child\n"; }
};

class See
{
protected:
    string info;
public:
    See(): info() {}
    See(string info):info(info) {}
    
    void Show()
    {
        cout<<info;
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
