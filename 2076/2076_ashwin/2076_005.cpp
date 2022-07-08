/*2076 ashwin */
/*write a program that will copy the content of one file , change the letters to upper case if they are in lower case and store in next file*/
/* write a program that will copy the content of one file , change the letters to upper case if they are in lower case and store in next file */

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