/*2075 chaitra*/
/*write a progarm to illustrate  the process of handling multiple exceptions*/
#include<iostream>
using namespace std;
int main()
{
    int x[3]={-1,2};
    for(int i=0;i<2;i++)
    {
        int  ex=x[i];
        try
        {
            {
                if(ex>0)
                throw ex;
                else
                throw 'ex';
            }
        }
        catch(int ex)
        {
            cout<<" integer exceptions";
        }
        catch(char ex)
        {
            cout<<"character exceptions";
        }
    }
}
