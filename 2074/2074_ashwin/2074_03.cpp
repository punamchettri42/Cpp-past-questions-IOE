/*2074 ashwin*/
/*write a program to store and retrive the information fo patient(patient id,name,adress,age and type ) in hospital management system.*/
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
    cout<< endl<<"patient adress "<<patient_adress;
    cout<<endl<<"patient age"<<patient_age;
    cout<< endl<<" the type of patient "<<patient_age;
}
void add()
{
    fstream fin; //this is for file
    hospital h; // this is for class object
    fin.open("hospital.txt",ios::app|ios::out|ios::binary);
    cout<<endl<<"The hospital record is";
    h.getdata();
    fin.write((char*)&h,sizeof(h));
    fin.close();
}

void display_data_again()
{
    fstream H;
    hospital h;
    H.open("hospital.txt",ios::in|ios::binary);
    while(H.read((char*)&h,sizeof(h)))
    {
        h.display_data();
    }
    H.close();

}
};
int main()
{
    cout<<" Enter the detail of the patient:"<<endl;
    hospital h1;
    h1.add();
    h1.display_data_again();
    return 0;
}