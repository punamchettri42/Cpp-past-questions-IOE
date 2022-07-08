/*2078 bhadra */
/*write a program to show order of constructor invocation in multiple inheritance*/

#include<iostream>
using namespace std;

class sum
{
    private:
    int a=3;
    int b=2;
    int c;
    public:
    sum()
    {
      c=a+b;
      cout<<"sum is: "<< c <<endl;
    }

};

class difference
{
    private:
    int x = 50;
    int y = 42;
    int z;
    public:
    difference()
    {
        z=x-y;
        cout<<"Difference is:"<< z <<endl;
    }
};


class mul: public sum,virtual difference
{
    private:
     int r = 40, s = 8, t;
    public:
        mul(): sum(), difference()
        {
           
            t = r * s;
            cout << "Product is:" << 
                     t << endl;
        }
};

int main()
{
    mul obj;
    return 0;
}