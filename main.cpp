#include <iostream>
#include "header.h"

using namespace std;

void Function(const Base &obj)
{
    cout << "* Call method func() for object obj" << endl;
    obj.func();
}

class Help
{
protected:
    int a, b;
public:
    int GtA()
    {
	return a;
    }
    int GtB()
    {
        return b;
    }
};

int main(int argc, char *argv[])
{
    cout << "* Create Object base" << endl;
    Base base;

    cout << "* Create Object child" << endl;
    Child child;

    cout << "* Call method func() for object base" << endl;
    Function(base);

    cout << "* Call method func() for object child" << endl;
    Function(child);

    return 0;
}
