/*2018 spring*/
/*write a program showing "++" and "--" operator overloading */
/*write a class that represents the distance class and overload ++ and --operator to increment and decrement distance*/
#include <iostream>
using namespace std;
class Distance
{
private:
    int meter;
    int centi_m;

public:
    Distance(int m, int cm)
    {
        meter = m;
        centi_m = cm;
    }
    Distance()
    {
        meter = 0;
        centi_m = 0;
    }
    Distance(Distance &d1)
    {
        meter = d1.meter;
        centi_m = d1.centi_m;
    }
    Distance operator++()
    {
        Distance d;
        d.centi_m = centi_m + centi_m;
        if (d.centi_m >= 100)
        {
            d.meter++;
            d.centi_m = d.centi_m - 100;
        }
        return d;
    }

    Distance operator--()
    {
        Distance d;
        d.centi_m = centi_m + centi_m;
        if (d.centi_m >= 100)
        {
            d.meter++;
            d.centi_m = d.centi_m - 100;
        }
        return d;
    }

    void display()
    {
        cout << meter << "m " << centi_m << "cm" << endl;
    }
};
int main()

{
    system("cls");
    Distance d1(10, 50), d2(5, 70), d3, d4;

    cout << "the first Distance is:";
    d1.display();

    ++d1;
    d1.display();

    ++d1;
    d1.display();
}