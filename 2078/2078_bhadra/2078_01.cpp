
/*2078 bhadra */
/* write a program to concatenate two user given string using the concept of operator overloading*/
#include<iostream>
#include<string.h>
using namespace std;
class concatenate
{
private:

char string1[10];
char string2[20];

public:
//now create parameterized constructor
concatenate(char str1[],char str2[])
{
    strcpy(this->string1, str1); //using de-reference pointer operator
    strcpy(this->string2, str2);
}
//now the imp concept of operator overloading is used
void operator+()  
    {
        cout << "\nConcatenation: " << strcat(string1, string2);
    }
};
int main()
{
    system("cls");
    // Declaring two strings
    char str1[] = "Hellow";
    char str2[] = " World!";

    concatenate a1(str1, str2);
 
    // Call operator function
    +a1;
    return 0;
}
