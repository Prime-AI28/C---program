/******************************************************************************
Class A
|
Class B |Class C
|
Class D
*******************************************************************************/
#include <iostream>
    using namespace std;
int a, b, c, d, e;
class A
{
protected:
public:
    void getab()
    {
        cout << "\n Enter a,b value:";
        cin >> a >> b;
    }
};
class B : public A
{
protected:
public:
    void getc1()
    {
        cout << "Enter c value:";
        cin >> c;
    }
};
class C
{
protected:
public:
    void getd()
    {
        cout << "Enter d value:";
        cin >> d;
    }
};
class D : public B, public C
{
protected:
public:
    void result()
    {
        getab();
        getc1();
        getd();
        e = a + b + c + d;
        cout << "\n Addition is :" << e;
    }
};
int main()
{
    D d1;
    d1.result();
    return 0;
}
