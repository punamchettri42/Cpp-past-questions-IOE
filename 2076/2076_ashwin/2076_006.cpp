/*2076 aswin */
/*write a program to create class to represent stack data structure and use exception handling to control empty and full cases*/
#include <iostream>
using namespace std;
#define MAX 2
class stack
{
protected:
    int *s;
    int top;
    int maximum_items;

    bool isFull()
    {
        return top + 1 == maximum_items;
    }

    bool isEmpty()
    {
        return top == -1;
    }

public:
    stack()
    {
        maximum_items = 20;
        s = new int(maximum_items);
        top = -1;
    }

    void push(int x)
    {
        if (!isFull())
        {
            // add to the stack and update top
        }
        else
        {
            // error message
        }
    }

    int pop()
    {
        if (!isEmpty())
        {
            // remove the last added item and update top
        }
        else
        {
            // error message
        }
    }

    // Display function to print stack
};

int main()
{
    stack s;

    return 0;
}
