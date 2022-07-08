/*2076 ashwin */
/*write a program to find volume of different shapes using funciton overloading */
#include <iostream>
#include<iomanip>
using namespace std;
void volume(float a)
{
cout <<setw(15) <<"Volume of Cube "<<endl;
cout <<setw(15)<<"Value a = " << a <<" Volume = " << a * a * a << endl;
}

void volume(float r, float h)
{
cout << setw(15)<<"Volume of Cylinder "<<endl;
cout << setw(15)<<"Value r = " << r<< "value of h="<<h<<endl;
cout << setw(15)<<"Volume = " << 3.14 * r * h << endl;           
}

void volume(float l, float w, float h)
{
cout <<setw(15)<<"Volume of Rectangle "<<endl;
cout <<setw(15) <<"Value l = " << l <<"w = " << w << "  h = " << h ;
cout<<endl;
cout <<setw(15)<<"Volume = " << l * w * h << endl;
}

int main()

{
int n, a, l1, w1, h1, r, h;
while(1)
   {
cout <<setw(12)<<"Calculate the Volume of Cube, Cylinder and Rectangle " << endl;
cout <<setw(12)<< "Cube : 1"<<setw(15) <<"Cylinder : 2 ";
cout <<setw(12)<<"Rectangle : 3"<<setw(15) <<"Exit : Other "<<endl;

cout <<setw(12)<<"Choose Appropriate option \n";
cout << " * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
cin >> n;
switch(n)
 {
    case 1:
     cout << " Enter the side of Cube " << endl << setw(15);
    cin >> a;
    volume(a);
    break;
    case 2: 
    cout << " Enter the radius of Cylinder " << endl << setw(15);
    cin >> r;
    cout << " Enter the Height of Cylinder " << endl <<setw(15);
    cin >> h;
    volume(r, h);
    break;
    case 3: 
    cout << " Enter the length of Rectangle " << endl << " \t ";
    cin >> l1;
    cout << " Enter the width of Rectangle" << endl << " \t ";
    cin >> w1;
    cout << " Enter the height of Rectangle" << endl << " \t ";
    cin >> h1;
    volume(l1, w1, h1);
    break;

    default: cout << " Thank You to Use this Program !";

    exit(0);

     }

 }

}