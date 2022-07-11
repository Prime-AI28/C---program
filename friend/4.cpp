#include<iostream>
using namespace  std;

class ClassB;
class ClassA
{
    public:
        ClassA() : nA(20) {}
    private:
        int nA;
        friend int add(ClassA, ClassB);
};

class ClassB
{
    public:
        ClassB() : nB(40){}
    private:
        int nB;
        friend int add(ClassA, ClassB);
};

int add(ClassA A, ClassB B)
{
    return(A.nA + B.nB);
}

int main()
{
    ClassA A;
    ClassB B;

    cout << "Sum: " << add(A,B);

    return 0;

}