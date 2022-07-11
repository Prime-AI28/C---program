/*COPY CONSTRUCTOR*/

#include <iostream>
using namespace std;

class sample
{
    int x;

public:
    sample() {}

    sample(int a)
    {
        x = a;
    }

    sample(sample &a)
    {
        x = a.x;
    }

    void show()
    {
        cout << "\n values of this object is:" << x;
    }

    ~sample()
    {
        cout << "\n destructor has been called...";
    }
};

int main()
{
    sample a(100); // a: x=100

    sample b(a); // copy CONSTRUCTOR b: x=100

    sample c = a; // COPY CONSTRUCTOR c: x=100

    sample d;
    d = a; // COPY CONSTRUCTOR d: x=100*/

    cout << "\n a:";
    a.show();
    cout << "\n b:";
    b.show();

    cout << "\n c:";
    c.show();

    cout << "\n d:";
    d.show();

    return 0;
}