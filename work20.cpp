#include<iostream>
using namespace std;
main()
{
        
        int number;
        int sum=0;
        
        cout<<"enter number of resistors connected in series:";
        cin>>number;
        int r[number];
        for(int idx=0;idx<number;idx++)
        {
            cout<<"enter resistance of R"<<idx+1<<":";
            cin>> r[idx];
            sum=sum+r[idx];
        }
       
        cout<<"the total resistance is:"<<sum;

        
}