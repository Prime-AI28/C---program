#include <iostream>
using namespace std;

class Cube
{
public:
    int side;
    Cube() // default Constructor (or) Constructor with no parameter
    {
        side = 10;
    }
};
int main()
{
    Cube c;
    cout << c.side;
    return 0;
}
