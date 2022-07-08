/*write a program to overload the relation operators to compare the length (in meter and centimeter) of two objects*/
#include <iostream>
using namespace std;
 
class Distance {
   private:
      int meter;             
      int cmter;           
      
   public:
      // required constructors
      Distance() 
      {
         meter = 0;
         cmter = 0;
      }
      Distance(int m, int cm) {
         meter = m;
         cmter = cm;
      }
      
      // method to display distance
      void displayDistance() {
         cout << "F: " << meter << " I:" << cmter <<endl;
      }
      
      // overloaded minus (-) operator
      Distance operator- () {
         meter = -meter;
         cmter = -cmter;
         return Distance(meter, cmter);
      }
      
      // overloaded < operator
      bool operator <(const Distance& d) {
         if(d.meter< d.cmter) {
            return true;
         }
         if(meter == d.meter &&  cmter ==d.cmter) {
            return true;
         }
         
         return false;
      }
};

int main() {
   Distance D1(11, 10), D2(5, 11);
 
   if( D1 < D2 ) {
      cout << "D1 is less than D2 " << endl;
   } else {
      cout << "D2 is less than D1 " << endl;
   }
   
   return 0;
}