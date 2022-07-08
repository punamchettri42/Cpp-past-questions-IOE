/*write a program to show the order of constructor invocation in multilever inheritance*/
//2074_ashwin
#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"constructor in base class"<<endl;
    }
    ~base()
    {
        cout<<"destructor in base class"<<endl;
    }
};
class derived:public base
{

public:
derived()
{
    cout<<"constructor in derived class"<<endl;
}
~derived()
{
    cout<<"destructor in derived class"<<endl;
}
};
class d_derived:public derived
{
public:
d_derived()
{
    cout<<"constructor in d_derived class"<<endl;

}
~d_derived()
{
    cout<<"destrucor in d_derived class"<<endl;
}
};
int main()
{
    d_derived d;
    return  0;
}