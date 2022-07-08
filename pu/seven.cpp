/* 2020 spring*/
/* write a program to add two complex numbers .your program shoul have three objects . Each object contains two attributes ( real and imaginary)
now add each attributes and save into thrid obejct seperately.use the concept of +overloading*/
#include <iostream>
using namespace std;
class complex{
    private:
    float real;
    float imaginary;
    public:
    complex()
    {
        real=0;
        imaginary=0;
    }
    complex(float r,float i)
    {
        real=r;
        imaginary=i;

    }
    complex operator +(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imaginary=imaginary+c.imaginary;
        return (temp);
    }
    void display()
    {
        cout<<real<<"+  j  "<<imaginary<<endl;
    }
};
int main()
{
    complex c1(2,5),c2(4,6),c3;
    c3=c1+c2;
    cout<<"C1=";
    c1.display();
    cout<<"C2=";
    c2.display();
    cout<<"c3=";
    c3.display();
}