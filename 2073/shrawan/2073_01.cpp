/* write a program to read your date your date of birth and display it. your program should throw multiple
exception for day,month and other valued not in range using exception class and each exception is handled by seperate handler*/
//2073 shrawan

#include<iostream>
using namespace std;
class day{};
class month{};
class year{};
class date
{
    private:
    int day_y;
    int month_h;
    int year_r;
    public:
    void read_data() throw (day , month ,year );
    void show_date();
};
    void date::read_data()throw (day,month,year)
    {
        cout<<" enter day:"<<endl;
        cin>>day_y;
        if(day_y> 31)
        throw day();
        cout<<" enter month:"<<endl;
        cin>>year_r;
        if(year_r<0)
        throw  year();

    }
    void date::show_date()
    {
        cout<<" date of birth is "<<day_y<<"/"<<month_h<<"/"<<year_r;
    }
    int main()
    {
        date d1;
        try
        {
            {
                cout<<" Enter your date of birth:"<<endl;
                d1.read_data();
                d1.show_date();
            }
        }
        catch(day)
        {
          cout<<" exception :day can't be greater than 31";
        }
        catch(month)
        {
            cout<<"exception:month can't be greater than 12";
        }
        catch(year)
        {
            cout<<"exception:year can't be negative"<<endl;
        }
        return 0;
        
    }
