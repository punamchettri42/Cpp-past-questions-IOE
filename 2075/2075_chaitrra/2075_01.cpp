/*2075 chaitra */
/* create a class called time that has seperarte int member data for hours ,minutes and seconds .oneconstruactor shoul initialize thsi data to zero(0)
 and another should iitialize to fixed values the member funstion shoul display in 10:45:00 format the final member fucntion should add two objects of type
 time passesd as arguments using operator overloadin*/
 #include<iostream>
 using namespace std;
 class time 
 {
    private:
    int hour;
    int min;
    int sec;
    public:
    time(int a=0,int b=0, int c=0)
    {
        hour =a;
        min=b;
        sec=c;
    }
    void gettime()
    {

      cout<<hour<<":"<<min<<":"<<sec<<endl;
    }
    time operator + (time t)
    {
        sec +=t.sec;
    
    if (sec>=60)
{
    min++;
    sec%=60;
}
min+=t.min;
if(min>=60)
{
    hour++;
    min%=60;
}
hour +=t.hour;
return *this;
    }
 };
 int main()
 {
    time t1(6,33,45),t2(6,42,52);
    cout<<"t1 is";
    t1.gettime();
    cout<<" t2 is";
    t2.gettime();
    time t3;
    t3.gettime();
    cout<<" the sum is in t3";
    t3=t1+t2;
    t3.gettime();
    return 0;
 }