/*2076*/
/* write a program desingning a class called midpoint to find mid_point between two points by returning object from member function using this pointer*/
#include <iostream>
using namespace std;

class midpoint
{
private:
    float p1x, p1y, p2x, p2y;
    float mx, my;

public:
    midpoint(): p1x(0), p1y(0), p2x(0), p2y(0), mx(0), my(0) {}

    midpoint(float p1x, float p1y, float p2x, float p2y)
    {
        this->p1x = p1x;
        this->p1y = p1y;
        this->p2x = p2x;
        this->p2y = p2y;
    }

    midpoint get_midpoint()
    {
        mx = (p1x + p2x) / 2;
        my = (p1y + p2y) / 2;

        return *this;
    }

    void showdata()
    {
        cout << "The midpoint is: " << mx << "," << my << endl;
    }

};

int main()
{
    midpoint m1(1,2,3,4);
    midpoint m2 = m1.get_midpoint();
    m1.showdata();
    m2.showdata();
    return 0;
}