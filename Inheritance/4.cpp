#include <iostream>
using namespace std;

class stud // Level-1
{
protected:
    int rollno;

public:
    void get_num(int a)
    {
        rollno = a;
    }
    void put_num()
    {
        cout << "Roll No.:" << rollno << endl;
    }
};
class marks : public stud // Level-2
{
protected:
    int sub1;
    int sub2;

public:
    void get_marks(int x, int y)
    {
        sub1 = x;
        sub2 = y;
    }
    void put_marks(void)
    {
        cout << "Subject 1:" << sub1 << endl;
        cout << "Subject 2:" << sub2 << endl;
    }
};
class res : public marks // Level-3
{
protected:
    float tot;

public:
    void disp(void)
    {
        tot = sub1 + sub2;
        put_num();
        put_marks();
        cout << "Total:" << tot << endl;
    }
}; /*stud --> level-1
 |
 marks -->level-2(Derived class / base class)
 |
 res Level-3 (obj) */
int main()
{
res std1;
std1.get_num(5);
std1.get_marks(10,20);
std1.disp();
return 0;
}

