/*2075  chaitra */
/*write a program to store and retrive the information of client (client id , account id, name ,adress and age)
 in bank management system .also calculate the total number of clientts in a bank*/

 #include<iostream>
 #include<stdlib.h>
 #include<fstream>
 using namespace std;

class bank
{
    private:
    char clientid;
    int accountid;
    char accountname[30];
    char adress[50];
    int age;
    public:
    void readdata()
    {
        cout<<"The id of the client is:";
        cin>> clientid;
        cout<<" The account id of the client is:";
        cin>> accountid;
        cout<<" The accoutn name of the client is:";
        cin>>accountname;
        cout<<" The adress of the client is:";
        cin>>adress;
        cout<<"THE AGE of the client:";
        cin>>age;
    }

    void displaydata()
    {
cout<<endl<<" THE ID OF THE CILENT IS "<<clientid;
cout<<endl<<"The account id of the client is"<<accountid;
cout<<endl<<"THe account name of the client is"<<accountname;
cout<<endl<<"The adress of the client is "<<adress;
cout<<endl<<"THE  AGE OF THE CLIENT IS "<<age;
    }

};
int main()
{
    bank lib,bil;
    system("cls");
    fstream f("bank.txt",ios::in|ios::out);
    lib.readdata();
    f.write((char *)&bil,sizeof(bil));
    cout<<"***********************************";
    cout<<endl<<" THE DATA FROM THE FILE LIBRARY.TXT IS";
    f.read((char *)&lib, sizeof(lib));
    lib.displaydata();
   
}