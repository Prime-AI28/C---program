#include <iostream>
using namespace std;

class student // Base class-1
{
protected:
    int rno, m1, m2;

public:
    void get()
    {
        cout << "Enter the Roll no :";
        cin >> rno;
        cout << "Enter the two marks :";
        cin >> m1 >> m2;
    }
};

class sports // Base case-2
{
protected:
    int sm; // sm = Sports mark
public:
    void getsm()
    {
        cout << "\nEnter the sports mark :";
        cin >> sm;
    }
};

class statement : public student, public sports // derived class
{
    int tot, avg;

public:
    void display()
    {
        tot = (m1 + m2 + sm);
        avg = tot / 3;
        cout << "Roll No" << rno << endl
             << "Total" << tot << endl;
        cout << "\n\tAverage : " << avg << endl;
        cout << "Sports Mark:" << sm;
    }
};

int main()
{
    statement obj;
    obj.get();
    obj.getsm();
    obj.display();
    return 0;
}