#include <iostream>
using namespace std;
class base // single Inheritance: 1 --> 1 base class specification
{
    // private:
protected:
    int y;

public:
    int x;
    void read_base()
    {
        cin >> x >> y;
    }
    void display_base()
    {
        cout << x << endl
             << y << endl;
    }
};
class Derived : public base
{
private:
    int z;

protected:
    int a;

public:
    void display_derive()
    {
        cout << x << endl
             << y << endl
             << z << endl
             << a << endl;
    }
    void read_derive()
    {
        cin >> z >> a;
    }
};
int main()
{
    Derived d;
    d.read_base();
    d.read_derive();
    // d.display_base();
    d.display_derive();
    return 0;
}
