/*2076*/
/* write a  program to make simple library management system of a coollege . your program should store  and retrive  the information (book name,book id, number of book and purchase date)*/

#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class library
{
    private:
    char book_name;
    int book_id;
    int numberofbooks;
    int purchasedate;
    public:
    void readdata()
    {
        cout<<"The name of book is:";
        cin>> book_name;
        cout<<" The id of the book is:";
        cin>> book_id;
        cout<<" The number of books:";
        cin>>numberofbooks;
        cout<<" The purchase date of the book is:";
        cin>>purchasedate;
    }

    void displaydata()
    {
        cout<<endl<<" BOOKNAME:"<< book_name;
        cout<<endl<<"BOOKID:"<<book_id;
        cout<<endl<<"The number of books:"<<numberofbooks;
        cout<<endl<<"Purchase date:"<<purchasedate;
    }

};
int main()
{
    library lib,bil;
    system("cls");
    fstream f("library.txt",ios::in|ios::out);
    lib.readdata();
    f.write((char *)&bil,sizeof(bil));
    cout<<"***********************************";
    cout<<endl<<" THE DATA FROM THE FILE LIBRARY.TXT IS";
    f.read((char *)&lib, sizeof(lib));
    lib.displaydata();
    getch();
}