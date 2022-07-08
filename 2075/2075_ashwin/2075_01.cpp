/*2075_ashwin*/
/*  create a class called time with data member hour ,minute ,seconds and day and initialize all data member using constructor write a program to add two time object using necessary member functions  and display the result*/
#include<iostream>
using namespace std;
class time
{
    private:
    int hr,min,sec,day;
    public:
    time()
    {
        day=0;
        hr=0;
        min=0;
        sec=0;
    }
    time(int d,int h,int m, int s)
{
    day=d;
    hr=h;
    min=m;
    sec=s; 
}
void display()
{
    cout<<day<<"day "<<hr<<"hour "<<min<<" minutes and "<<sec<<" second"<<endl;
}
void add(time t1, time t2)
{
    sec=t1.sec+t2.sec;
    min=t1.min+t2.min+sec/60;
    sec=sec%60;
    hr=t1.hr+t2.hr+min/60;
    min=min%60;
    day=t1.day+t2.day+hr/24;
    hr=hr%24;
}
};
int main()
{
    time t1(1,12,45,34),t2(3,13,45,34),t3;
    t3.add(t1,t2);
    cout<<endl<<"the addition of two time is:";
    t3.display();
    return 0;
}