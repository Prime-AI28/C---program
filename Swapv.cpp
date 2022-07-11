#include <iostream>

using namespace std;

class swap1
{
    int a, b; // data members

public: // access specifiors
    // private:
    // protected:
    void getdata(); // member function

    void swapv();

    void display();
};

// ret.type classname ::(scope resolution opertator)
void swap1::getdata()
{
    cout << "Enter two numbers:";
    cin >> a >> b;
}

void swap1::swapv()
{
    a = a + b;
    b = a - b;
    a = a - b;
}

/*void swap::swapv()
{
a=a+b;
b=a-b;
a=a-b;
}*/

void swap1::display()
{
    cout << "a=" << a << "\tb=" << b;
}

int main()
{
    swap1 s; // object creation

    s.getdata();
    /*cout<<"\nBefore swap: \n";
    s.display();*/

    s.swapv();
    // cout<<"\nAfter swap:\n";
    s.display();

    return 0;
}