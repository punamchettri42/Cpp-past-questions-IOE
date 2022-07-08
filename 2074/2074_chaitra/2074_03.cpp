/*write a program to write the information of 10 employee in a file and display their details in console*/
//baakica
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
const char* datafile ="employee_info.dat";
class employee
{
    private:
    char name[20];
    char address[20];
    char phone[20];
    public:
    void read();
    void show();
    void readinfo();
    void writeinfile();
};
void employee::read()
{
    cout<<endl<<" Enter name ";
    cin>>name;
    cout<<" Enter adress";
    cin>>address;
    cout<<" Enter phone number:";
    cin>>phone;
    

}
void employee::show()
{
    cout<<endl<<" Name of the employee is"<<name;
    cout<<endl<<"Adress of the employee is "<<address;
    cout<<endl<<"Phone number of the employee is"<<phone;
    cout<<"____________________________________________________"<<endl;
}
