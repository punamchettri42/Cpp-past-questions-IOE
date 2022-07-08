//2073 shrawan
/*write a program to show execution of construcor and destructor in  multiple level inheritance */
#include<iostream>
using namespace std;
class a
{
    public:
    a()
    {
cout<<"zero argument constructor of base class a "<<endl;
    }
    ~a()
    {
        cout<<"zero argument destructor of base class a"<<endl;
    }
};
class b:public a{
    public:
    b()
    {
        cout<<"zero argument constructor of base class b"<<endl;

    }
    ~b()
    {
        cout<<"zero argument destructor of base class b"<<endl;
    }
    
};
class c: public b{
    public:
    c()
    {
        cout<<"zero argument constructor of derived class c"<<endl;

    }
    ~c()
    {
        cout<<"zero argument destructor of derived class c"<<endl;
    }
};
int main()
{
    c s;
    return 0;
}