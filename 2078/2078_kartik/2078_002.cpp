/* 2078 */
/*write a program in a file of student to add the record ,list the record search by roll number and delete the record*/
#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
class student
{
    private:
    char name[20];
    int age;
    int roll;
    char department;
    char descriptionofstudent[200];
    public:
    void readata()
    
    {
        cout<<"Enter the name of the student:";
        cin>>name;
        cout<<"Enter the age of the student:";
        cin>>age;
        cout<<"Enter the roll no of the student:";
        cin>>roll;
        cout<<"Enter the department of the student:";
        cin>>department;
        cout<<"Explain about student:";
        cin>>descriptionofstudent;
    }
    void displaydata()
    {
        cout<<endl<<"the name of the student:"<<name;
        cout<<endl<<"the age of the student:"<<age;
        cout<<endl<<"the roll no of the student:"<<roll;
        cout<<endl<<"the department of the student:"<<department;
        cout<<endl<<"the description of the student:"<<descriptionofstudent;
    }
    int getrollno ()
    {
 return roll;
    }

};
int main()
{
    student st;
    int rn;
    int isfound;
    system("cls");
    fstream file;
    file.open("student.txt",ios::ate|ios::in|ios::out|ios::binary);
    cout<<"Enter roll number to be searched:";
    cin>>rn;
    file.seekg(0,ios::beg);
    file.read((char *)&st,sizeof(st));
    while(!file.eof())
    {
        if(st.getrollno()==rn)
        {
            cout<<endl<<"**********THE SEARCHED DATA IS:*****************";
            st.displaydata();
            isfound =1;
            break;

        }
        file.read((char*)&st,sizeof(st));
    }
    file.clear();
    if(isfound==0)
    cout<<endl<<"************* data not found ****************";
    file.close();
}