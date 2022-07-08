/*create a template functon swap () and use it to swap two integers ,two floating point data and two characters*/
/*2020 fall*/
#include<iostream>
#include<iomanip>
using namespace std;
template<class datatype>
void swap(datatype *x,datatype *y)
{
    datatype temp;
    temp =*x;
    *x=*y;
    *y=temp;
}
void main()
{
    system("cls");
    int a,b;
    float m,n;
    char p,q;
    cout<<"Enter two integers";
    cin>>a>>b;
    cout<<"Enter two floating point data";
    cin>>m>>n;
    cout<<"Enter two characters:";
    cin>>p>>q;
    //now using function call
    cout<<endl<<"Integers :a ="<<a <<setw(10)<<"b="<<b;
    cout<<endl<<"Floating point numbers are m:"<<m<<setw(10)<<"n="<<n;
    cout<<endl<<"Characeter point valuse is "<<p<<setw(10)<<"q="<<q;
    swap(&a,&b);
    swap(&m,&n);
    swap(&p,&q);
    //now after calling fucntion call
    cout<<endl<<"Integer :a="<<a <<setw(10)<<"b="<<b;
    cout<<endl<<"Floating numbers:m"<<m<<setw(10)<<"n="<<n;
    cout<<endl<<"Characters :p="<<p<<setw(10)<<"q="<<q;
    
}