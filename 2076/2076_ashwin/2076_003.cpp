/*write a program to create a derived class by inheriting two base classes with same function names. your program shoul be complete and meaningful*/
/*2076_aswhin*/
// with same function means function overriding
#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void getdata()
    {
        cout << "enter roll no:";
        cin >> roll;
    }
    void display()

    {
        cout << "Roll: " << roll << endl;
    }
};

class exam : public student
{
protected:
    float subject1, subject2;

public:
    void getdata()
    {
        cout << " Enter marks in first subject:";
        cin >> subject1;
        cout << "Enter marks in second subject:";
        cin >> subject2;
    }
    void display()
    {
        cout << "marks in first subject:" << subject1 << endl;
        cout << "marks in second subject:" << subject2 << endl;
    }
};

class result : public exam
{
    float total;

public:
    void getdata()
    {
        this->exam::getdata();
        total = subject1 + subject2;
    }
    void display()
    {
        cout << "the total marks is:" << total;
    }
};

int main()
{
    result r1;
    r1.getdata();

    cout << "-------the record of the student is ------------------\n";
    r1.display();

    return 0;
}
