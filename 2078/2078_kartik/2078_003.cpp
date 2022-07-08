/*2078 kartik*/
/*write a progaram ot demostrate function example of function overloading with function tempalte and normal function*/
#include<iostream>
using namespace std;
template <class T>  // Template declaration
void display(T t1)  // Template overloading of function
{
    cout << "Displaying Template: "<< t1 << "\n";
}
  
// Template overloading of function
void display(int t1)
{
    cout << "Explicitly display: "<< t1 << "\n";
}
int main()
{
    display(200);
    display(12.40);
    display('G');
    return 0;
}