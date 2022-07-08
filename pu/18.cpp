/* 2017 cpp*/
/* write a cpp program to convert polar coordinates into rectangualar coord */
#include<iostream>
using namespace std; 
void convert_to_rect(int r, int angle)
{
    int a,b;
    a=r*cos(angle);
    b=r*sin(angle);
    cout<<"Rectangular form is: "<<a<<" + i("<<b<<")"<<endl;
}

int main() 
{ 
    int r,angle;
    r=5;
    angle=10;
    //Displaying Polar form
    cout<<"Polar form is: "<<r<<"*(cos("<<angle<<")+isin("
        <<angle<<"))"<<endl;
    //Passing r and angle to convert_to_rect function 
    convert_to_rect(r,angle); 
    return 0; 
} 