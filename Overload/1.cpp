#include <iostream>

using namespace std;

class counter
{
private:
    unsigned int count;

public:
    counter()
    {
        count = 0;
    }
    int get_count()
    {
        return count;
    }

    friend counter operator++(counter c);
};

counter operator++(counter c)
{
    ++c.count;
    counter temp;
    temp.count = c.count;
    return temp;
}

int main()
{
    counter c1, c2;
    cout << "\n c1 =" << c1.get_count();
    cout << "\n c2 =" << c2.get_count();

    ++c1;

    c2 = ++c1;

    cout << "\n c1 =" << c1.get_count();
    cout << "\n c2 =" << c2.get_count();

    return 0;
}