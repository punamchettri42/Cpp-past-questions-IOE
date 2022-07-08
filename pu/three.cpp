/* create the template to find the sum of two integers and floats*/
/*2020 fall*/
#include<iostream>
using namespace std;
template <class T>
T add(T a,T b)
{
    return (a+b);
}
int main()
{
    int i_result,a=10,b=20;
    float f_result,x=2.4444444,y=88.666;
    system("cls");
    i_result=add(a,b);
    f_result=add(x,y);
    cout<<"Sum of two integers :"<<i_result;
    cout<<endl<<"Sum of two fracitional numbers :"<<f_result;
}