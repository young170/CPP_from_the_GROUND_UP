#include <iostream>

using namespace std;

class tmp {
    int x, y;
public:
    tmp() { x = y = 0; }
    tmp(int i, int j) { x = i; y = j; }

    void operator+(tmp op2);
    tmp operator=(tmp op2);

    void show();
};

void tmp::operator+ (tmp op2)
{
    this->x = this->x + op2.x;
    this->y = this->y + op2.y;
}

// this also works
// tmp tmp::operator+ (tmp op2)
// {
//     tmp temp;

//     temp.x = this->x + op2.x;
//     temp.y = this->y + op2.y;

//     return temp;
// }

tmp tmp::operator= (tmp op2)
{
    this->x = op2.x;
    this->y = op2.y;

    return *this;
}

void tmp::show() {
    cout << x << ", ";
    cout << y << "\n";
}

int main ()
{
    tmp a(1, 2), b(10, 10), c;

    a.show();
    b.show();

    a + b;
    a.show();

    c = a;
    c.show();

    return 0;
}