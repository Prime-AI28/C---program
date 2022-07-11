#include <iostream>
using namespace std;

class student // base class
{
public:
    int rno;
    char name[20];

    void getdata()
    {
        cout << "Enter RollNo:";
        cin >> rno;
        cout << "Enter Name:";
        cin >> name;
    }
};
/* student
|[private,public,protected]
marks */

class marks : public student
{
public:
    int m1, m2, m3, tot = 0;
    float avg;
    void getmarks()
    { // getdata();
        cout << "Enter Marks 1,2,3: ";
        cin >> m1 >> m2 >> m3;
    }

    void display()
    {
        cout << rno << endl
             << name << endl
             << m1 << endl
             << m2 << endl
             << m3 << endl;
        tot = m1 + m2 + m3;
        avg = tot / 3;
        cout << tot << endl
             << avg << endl;
    }
};

int main()
{

    marks m;
    m.getmarks();
    m.display();
    m.getdata();
    return 0;
}