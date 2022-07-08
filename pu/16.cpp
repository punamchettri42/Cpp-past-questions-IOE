/* create a class person with data members name ,age and address. create another class teacher with data members qualtification and department .and create another class student with data member program and semester both class are inherited from the class person*/
#include<iostream>
using namespace std;
class person{
    protected:
    char name[20];
    int age;
    char adress[100];
    public:
    void readdata()
    {
        cout<<"Enter the name of the person";
        cin>>name;
        cout<<"Enter the age of the person";
        cin>>age;
        cout<<"Enter the adress of the person";
        cin>>adress;

    }
    void displaydata()
    {
        cout<<" The name of the person is"<<name;
        cout<<"The age of the person is"<<age;
        cout<<"The  adress of the person is"<<adress;
    }
};
class teacher:public person
{

protected:
char qualifications[200];
char department[30];
public:
void readdata_teacher()
{
    cout<<"Explain the qualtification of the teacher.";
    cin>>qualifications;
    cout<<"which is the department of the teacher";
    cin>>department;

}
void displaydata_teacher()
{
    cout<<"The qualification of the teacher is"<<qualifications;
    cout<<"The department of the teacher is"<<department;
}

};
class student:public teacher
{
    char program[30];
    char semester[30];
    public:
    void readdata_students()
{
    cout<<"Explain the program  of the student.";
    cin>>qualifications;
    cout<<"which is the semester  of the student he is studying in";
    cin>>department;

}
 void displaydata_students()
 {
    cout<<"The program of the student is"<<program;
    cout<<"The semsester of the student is"<<semester;
 }
};
int main()
{
    student s;
    s.readdata();
    s.readdata_teacher();
    s.readdata_teacher();

    s.displaydata();
    s.displaydata_teacher();
    s.displaydata_students();
}