/*2018 fall*/
/* create a  class named employee with data member code,name,adress,salary . create a constructor so that we can create an object from another object.defien member function () to display the information of class*/
#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
class employee
{
    int code;
    char name[20];
    char adress[100];
    int salary ;
    public:
    employee();
    void readdata()
    {
        cout<<" Enter the name of the employee:";
        cin>>name;
        cout<<"Enter the code of the employee:";
        cin>>code;
        cout<<"Enter the adress of the employee:";
        cin>>adress;
        cout<<"Enter the salary of the employee:";
        cin>>salary;
    }
    void displaydata()
{
    cout<<endl<<"The name of the employee is"<<name;
    cout<<endl<<"The code of the employee is "<<code;
    cout<<endl<<"The adress of the employee is"<< adress;
    cout<<endl<<"The salary of the employee is "<<salary;
}
};

int main()
{
    employee e;
    e.readdata();
    e.displaydata();
    return 0;

}