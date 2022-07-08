/*write a program to make a simple library management system of a college. your program should store and retrive the information (book name,book id, number of books and purchase date).*/
//2073 shrawan
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class library
{

    char bookname[40];
    int num_book;
    int bookid;
    char date[40];
    public:
    void getdata()
    {
        cout<<" Enter the id of the book:"<<endl;
        cin>>bookid;
        cout<<" Enter the name of the book:"<<endl;
        cin>>bookname;
        cout<<" Enter the number of books:"<<endl;
        cin>>num_book;
        cout<<" Enter the date when the book was purchased:"<<endl;
        cin>>date;
    }
    void showdata()
    {
        cout<<"The id of the book is"<<bookid<<endl;
        cout<<"The name of the book is"<<bookname<<endl;
        cout<<"The number of the book is"<<num_book<<endl;
        cout<<"The purchase date of the book is"<<date<<endl;
    }
    int searchdata(int r)
    {
        if(bookid==r)
        return 1;
        else 
        return 0;
    }
    void showrecord();
    void inputrecord();

};
void library::showrecord()
{
    library lib;
    int bookid;
     int f=0;
    fstream file;
    file.open("library.txt",ios::in|ios::out|ios::binary);
    cout<<" Enter book id:"<<endl;
    cin>>bookid;
    do
    {
     if(lib.searchdata(bookid))
{
    lib.showdata();
    f=1;
    break;
}
    }while(file.read((char*)&lib,sizeof(lib)));
    if (f==0)
    
        cout<<" not found "<<endl;
        file.close();

}
    void library::inputrecord()
    {
        library lib;
        fstream file;
        file.open("library.txt",ios::in|ios::out|ios::binary|ios::app);
        char ch;
        do
        {
        cout<<" Enter book's data:"<<endl;
       lib.getdata();
       file.write((char*)&lib ,sizeof(lib));
       cout<<" Enter another book information(y/n)?";
       cin>>ch;
        }while (ch=='y'||ch=='Y');
        file.close();
    }
    int main()
    {
    system("cls");
    int n;
    library lib;
    while(1)
    {
        cout<< ">> INPUT RECORD"<<endl;
        cout<<">>search by bookid"<<endl;
        cout<<">>exit"<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
            lib.inputrecord();
            break;
            case 2:
            lib.showrecord();
            break;
            case 3:
            exit(0);
            break;
            default:
            cout<<"enter any amoung above two.";
        }

    }
    return 0;
    }