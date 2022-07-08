/*2018 fall*/
/*write a program to read the height of a person in feet and inches and convert it into meter using the concept of user defined to calss type conversion method using type conversion method*/
#include<iostream>
using namespace std;
const float M= 3.2;
class convert
{
    int feet;
    float inch=0.0;
    public:
    convert(){

        feet=0;
        inch=0.0;
    }
    convert(int ft,float in)
    {
        feet=ft;
        inch=in;

    }
    operator float()
    {
        float f=inch/12;
        f=f+feet;
        return (f/M);
    }
};

int main()
{
    convert con1(2,2.5),con2(59,7.888);
    float M1=float(con1);
    float M2;
    cout<<"conversion in meter for conversion one is:"<<M1;
    cout<<"conversion in meter for conversion two is:"<<M2;
    return 0;

}
