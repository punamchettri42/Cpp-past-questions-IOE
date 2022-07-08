/*write a program to illustrate paramerized constructor*/
/*2020 fall*/
#include<iostream>
using namespace std;
class box
{
    float l,b,h;
    public:
    box(float len,float breadth , float height)
    {
        l=len;
        b=breadth;
        h=height;
    }
    void displaymembers()
    {
        cout<<"The length of the box is"<<l;
        cout<<" THe breadth of the box is"<<b;
        cout<<"The height of the box is"<<h;
    }
    float getvolume()
    {
        return l*b*h;
    }
};
void main()
{
    float volume;
    box b(5,6,7);
    b.displaymembers();
    volume=b.getvolume();
    cout<<endl<<"The volume of the box is:"<<volume;

}