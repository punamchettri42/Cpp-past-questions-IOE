/*2075 ashwin */
/*write an abstract class of your choice and use it in a  < program  your program should be meaningful*/
#include<iostream>
using namespace std;
class base
{
    private:
    int x;
    public:
    virtual void fun()=0;
    int get()
    {
        return x;
    }
};
    class derived: public base
    {


        public:
        void fun()
        {
            cout<<" function fun () called."<<endl;
        }

    };
    int main(void)
    {
        derived d;
        d.fun();
        return 0;

    }

