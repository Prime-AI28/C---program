#include <iostream>
using namespace std;
class sum
{
public:
    int a, b, sum = 0;
    void getdata();
    void calculate();
    void putdata()
    {
        cout << "Sum of " << a << " + " << b << " is:" << sum;
    }
};

void sum::getdata()
{
    cin >> a >> b;
}

void sum::calculate()
{
    sum = a + b;
}

int main()
{
    sum s;
    s.getdata();
    s.calculate();
    s.putdata();
    return 0;
}
