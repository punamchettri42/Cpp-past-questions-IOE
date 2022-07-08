/*2075 aswin */
/*write a program to show opening ,reading objects from file ,checking end of file  and closing a file*/
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class hospital
{
    private:
    char patient_name[30];
    int patient_id;
    char patient_adress[30];
    int patient_age;
    char patient_type[50];
    public:
    void getdata()
    {
        cout<<endl<<" enter the name of the patient:";
        cin>>patient_name;
        cout<<endl<<" enter the id of the patient:";
        cin>>patient_id;
        cout<<endl<<" enter the adress of the patient:";
        cin>>patient_adress;
        cout<<endl<<" enter the age of the patient:";
        cin>>patient_age;
        cout<<endl<<" enter the type of patient like what kind of disease is he suffering:";
        cin>>patient_type;
    }
    void display_data()

{
    cout<<endl<<"patient id:"<<patient_id;
    cout<<endl<<"patient name"<<patient_name;
    cout<<endl<<"patient adress "<<patient_adress;
    cout<<endl<<"patient age"<<patient_age;
    cout<<endl<<" the type of patient "<<patient_age;
}
void add()
{
    fstream f;
    hospital h;
    f.open("hospital.txt",ios::app|ios::out|ios::binary);
    cout<<endl<<" The Hospital Record:";
    h.getdata();
    f.write((char*)&h,sizeof(h));
    f.close();
}
void display_all_data()

{
    fstream F;
    hospital h;
    F.open("hospital.txt",ios::in|ios::binary);
    while(!F.eof())
    {
        cout<<endl;
        h.display_data();
        F.read((char*)&h,sizeof(h));

    }
    F.close();


}
};
int main()

{
cout<<"Enter the details of the patient:";
hospital h1;
h1.add();
h1.display_all_data();
return 0;

}