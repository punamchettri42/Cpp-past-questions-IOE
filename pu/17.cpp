/* 2017 spring */
/*  create a class time having constructor having hour,minutes and seconds data from user . the add function that takes two class object and arguments adds them respectively then dispaly aggreagate result*/

#include <iostream>
#include <iomanip>

class Time
{
private:
    int seconds, minutes, hours;

public:
    Time()
    {
        seconds = 0;
        minutes = 0;
        hours = 0;
    }

    Time(int s, int m, int h)
    {
        seconds = s;
        minutes = m;
        hours = h;
    }

    Time add(Time t)
    {
        Time time;

        time.seconds = t.seconds + seconds;
        time.minutes = t.minutes + minutes;
        time.hours = t.hours + hours;

        if (time.seconds >= 60)
        {
            time.seconds -= 60;
            time.minutes += 1;
        }

        if (time.minutes >= 60)
        {
            time.minutes -= 60;
            time.hours += 1;
        }
        if (time.hours >= 24)
        {
            time.hours -= 24;
        }

        return time;
    }

    void display(bool twenty_four_format = true)
    {
        if (twenty_four_format)
        {
            std::cout << hours << ":"
                      << minutes << ":"
                      << seconds << "\n";
        }
        else
        {

            std::cout << ((hours > 12) ? (hours - 12) : (hours)) << ":"
                      << minutes << ":"
                      << seconds << ((hours >= 12) ? (" P.M.\n") : (" A.M.\n"));
        }
    }
};

int main()
{
    Time time_one(12, 49, 12), time_two(12, 32, 13);

    time_one.display(false);
    time_two.display(false);

    Time time_three = time_one.add(time_two);

    time_three.display();

    return 0;
}