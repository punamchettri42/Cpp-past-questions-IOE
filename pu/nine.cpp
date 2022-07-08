/*write a program to add two complex numbers your program should have three objects . each object contains two attributes(real and imaginary )
now add each attributes  and save them into third object seperately.use the concept of "+" operator overloading*/
#include <iostream>
using namespace std;
class complexadd

{
    int x, y;

public:
    complexadd() {}
    complexadd(int a, int b)
    {
        x = a;
        y = b;
    }
    complexadd operator+(complexadd c1)
    {
        complexadd temp;
        temp.x = x + c1.x;
        temp.y = y + c1.y;
        return temp;
    }
    void display()
    {
        cout << x << "+" << y << "j";
    }
};
int main()
{
    complexadd p(5, 7), q(4, 5), r;
    r = p + q;
    r.display();
    return 0;
}