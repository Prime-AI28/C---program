#include <iostream>
using namespace std;

// Multi - level Inheritance

class base_l1
{

protected:
    int y;

public:
    int x;
    int z;
    void read_base1()
    {
        cin >> x >> y >> z;
    }
};

class der1 : public base_l1
{
    // private:

protected:
    int b;
    int a;

public:
    int c;
    void read_der1()
    {
        cin >> a >> b >> c;
    }
};

class der2 : public der1
{
    int m;

protected:
    int n;

public:
    int o;
    void read_der2()
    {
        cin >> m >> n >> o;
    }
    void calculate()
    {
        int z1 = (a + b + c) + (x * y * z) + (m + n + o);
        cout << z1;
    }
};

int main()
{
    der2 d2;
    d2.read_base1();
    d2.read_der1();
    d2.read_der2();
    d2.calculate();
    return 0;
}
