/*2078 kartik*/
/*write a program to add two time object using operator overloading*/
#include <iostream>
using namespace std;
class Time
 {
private:
    int sec;
    int min;
    int hr;
public:
    void setTime(int x, int y, int z)
    {
        sec = x;
        min= y;
        hr = z;
    }
    void showTime()
    {
        cout << endl<< sec << ":" << min << ":" << hr;
    }
    void normalize()
    {
        min = min + sec / 60;
        sec = sec % 60;
        hr = hr + min / 60;
        min = min % 60;
    }
    Time operator+(Time t)
    {
        Time temp;
        temp.sec = sec + t.sec;
        temp.min = min + t.min;
        temp.hr = hr + t.hr;
        temp.normalize();
        return (temp);
    }
};
int main()
{
    Time t1, t2, t3; //t1,t2,t3 are objects
    t1.setTime(5, 50, 30);
    t2.setTime(7, 20, 34);
    t3 = t1 + t2;
    t1.showTime();
    t2.showTime();
    t3.showTime();
    return 0;
}

