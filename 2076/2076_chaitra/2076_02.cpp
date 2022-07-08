/*2076*/
/* write a program which conains a class baseclass that asks the user to enter the complex number and make a derived class that adds  the complex  number of its own base  . finally make third classs taht is friend of derived and calculatee  teh difference of base complex   number  and its own complex number */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream in_file, out_file;
    in_file.open("case.txt", ios::in);
    out_file.open("new_case.txt", ios::out);
    if(!in_file || !out_file)
    {
        cout << "File(s) not opened" << endl;
        return 0;
    }
    else
    {
        char c;
        cout << "File(s) opened" << endl;
        while(true)
        {
            in_file.get(c);
            if(in_file.eof()){
                break;
            }

            else
            {
                if(c >= 'a' && c <= 'z'){
                out_file << char(c - 32);
            }
            
                else{
                    out_file << c;
                }
            }

        }
        in_file.close();
        out_file.close();
    }

    return 0;
}