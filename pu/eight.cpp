/*create a program to create twovector coordinates from a base class named"base" class"derived  inherits ,all the propertiess
of class base .classs "derived " must contain the fucntion add vector that add the two vectors input from the base class and finally display the result from the function display that is friend with a base class*/

#include <iostream>

class Base
{
    float x, y;

public:
    Base(){};
    Base(float a, float b) : x(a), y(b){};

    void setX(float x) { this->x = x; }
    float getX() { return this->x; }

    void setY(float y) { this->y = y; }
    float getY()
    {
        return this->y;
    }
};

class Derived : public Base
{
public:
    Derived(float x, float y) : Base(x, y){};

    void add(Derived &d)
    {
        this->setX(this->getX() + d.getX());
        this->setY(this->getY() + d.getY());
    }

    friend void display(Derived d);
};

void display(Derived d)
{
    std::cout << "X = " << d.getX() << " Y = " << d.getY() << "\n";
}

int main(int argc, char const *argv[])
{
    Derived d1(1, 2), d2(3, 4);

    display(d1);

    d1.add(d2);

    display(d1);

    return 0;
}
