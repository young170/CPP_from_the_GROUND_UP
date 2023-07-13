#include <iostream>

using namespace std;

class figure {
protected:
    double x, y;
public:
    void set_dim(double i, double j) {
        x = i;
        y = j;
    }
    virtual void show_area() = 0; // pure virtual function
    // only "=0" is allowed
};

class triangle : public figure {
public:
    void show_area() {
        cout << "Triangle\n";
        cout << "area: " << x * 0.5 * y <<"\n";
    }
};

class rectangle : public figure {
public:
    void show_area() {
        cout << "Rectangle\n";
        cout << "area: " << x * y <<"\n";
    }
};

int main(void)
{
    figure *ptr;

    triangle tri;
    rectangle rec;

    ptr = &tri;
    ptr->set_dim(10.0, 5.0);
    ptr->show_area();

    ptr = &rec;
    ptr->set_dim(10.0, 5.0);
    ptr->show_area();

    return 0;
}