#include<iostream>
using namespace std;

class Shape
{
    protected:
    public:
    void Outsh()
    {
        cout << "\nThis is a shape";
    }

};

class Polygon : public Shape
{
    protected:
    public:
        void Outpl()
        {
            cout << "\nPolygon is a Shape";
        } 
};

class Triangle : public Polygon
{
    protected:
    public:
        void outtri()
        {
            cout << "\nTriangle is a polygon";
        }
};

class Rectangle : public Polygon
{
    protected:
    public:
        void outrec()
        {
            cout << "\nRectangle is a polygon";
        }
};

class Square : public Rectangle
{
    protected:
    public:
        void outsq()
        {
            cout << "\nSquare is a rectangle";
        }
};

int main()
{
    Shape s;
    Polygon p;
    Rectangle r;
    Triangle t;
    Square sq;

    s.Outsh();
    p.Outpl();
    r.outrec();
    t.outtri();
    sq.outsq();

    return 0;

}