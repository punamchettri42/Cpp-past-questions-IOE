/*2078 bhadra*/
/*write a program to write the information of students in file and display the information in console*/
#include<iostream>
#include<fstream>
using namespace std;
class student
{
   int roll;
   char name[20];
   float marks;
public:
   student();
   void getData(); 
   void displayData(); 
};

void student :: getData() {
   cout <<endl<<"Enter Roll No. :: ";
   cin >> roll;
   cout <<endl<< "Enter Name :: ";
   cin.getline(name, 20);
   cout <<endl<< "Enter Marks :: ";
   cin >> marks;
}

void student :: displayData() {
   cout << endl<<"Roll No. :: " << roll << endl;
   cout << endl<<"Name :: " << name << endl;
   cout << endl<<"Marks :: " << marks << endl;
}

int main()
{
   student s[3]; 
   fstream file;
   int i;

   file.open("file.txt", ios :: out); 
    cout << endl<<"Writing Student information to the file :- " << endl;
    cout << endl<<"Enter 3 students Details to the File :- " << endl;

   for (i = 0; i < 3; i++)
    {
      s[i].getData();
      file.write((char *)&s[i], sizeof(s[i]));
    }

   file.close();

   file.open("file.txt", ios :: in);
   cout << endl<<"Reading Student information to the file :- " << endl;

   for (i = 0; i < 3; i++)
    {
      file.read((char *)&s[i], sizeof(s[i]));
      s[i].displayData();
    }

   file.close();

   return 0;
}

