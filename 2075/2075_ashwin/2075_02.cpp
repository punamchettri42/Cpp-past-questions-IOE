/*2075 ashwin */
/*write a program to concatenatee two user given string by overloading binary plus(+) operator */
#include <iostream>
#include <string.h>

using namespace std;

class String
{
private:
    char st[20];

public:
    void read()
    {
        cout << "enter string:";
        cin >> st;
    }
    void display()
    {
        cout << "the string is :"<<this->st;
    }
    String operator+(String b)
    {
        String temp;
        strcpy(temp.st, strcat(st, b.st));
        return temp;
    }
};

int main()
{
    String s1, s2, s3;

    s1.read();
    s2.read();
    s3 = s1 + s2;
    cout << "after concatenation:";
    s3.display();
    return 0;
}