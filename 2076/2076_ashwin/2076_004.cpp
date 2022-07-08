/*2076 ashwin */
/*write a program that shows the use of pure virtual function*/
//virtual function is not in existence in real but appers to be in real in some part of the program is virtual function
#include <iostream>
using namespace std;
class Base
{
    public:
    virtual void Display ()
    {
        cout << "Display of Base" << endl;
    }
};
class Derived:public Base
{
    public:
    void Display ()
    {
        cout << "Display of Derived" << endl;
    }
};
int main()
{
    Base *p = new Derived();
    p->Display();
}