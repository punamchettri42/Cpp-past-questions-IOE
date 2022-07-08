/*2075 ashwin */
/*write a program using template to add two numbers . use the function template  to pass integer,flaot and douuble .display the returned result */
#include<iostream>
using namespace std;
template<class t1,class t2>
t1 test_function(t1 a,t2 b)
{
    return(a+b);
}
int main()
{
    int num1=5;
    int num2=7;
    cout<<endl<<"The integer sum is "<<test_function(num1,num2);
    float f_num1=5.5;
    float f_num2=9.88;
    cout<<endl<<"The float sum is"<<test_function(f_num1,f_num2);
    double d_num1=6.44;
    double d_num2=7.33;
    cout<<endl<<"The double number sum  is"<< test_function(d_num1,d_num2);
    return 0;
}