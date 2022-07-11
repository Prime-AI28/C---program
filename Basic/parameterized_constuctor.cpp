// parameterized constructor
#include <iostream>
using namespace std;
class Employee
{
public:
    int age;
    Employee(int x)
    {            // parameterized constructor (or) constructor with parameter
        age = x; // age assigned to value passed as argument while object declaration
    }
};
int main()
{
    Employee c1(40); // object c1 declared with argument 40 which gets assigned to age
    Employee c2(30);
    Employee c3(50);
    cout << c1.age << "\n";
    cout << c2.age << "\n";
    cout << c3.age << "\n";
    return 0;
}
