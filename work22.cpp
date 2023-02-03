#include<iostream>
using namespace std;
main()
{
     float due;
     float change[4];
     cout<<"enter total due amount:";
     cin>>due;
     float sum=0;
     for(int idx=0;idx<4;idx++)
     {
        if(idx==0)
        {
        cout<<"enter quaters you have:";
        cin>>change[idx];
        change[idx]=change[idx]*0.25;
        }
        if(idx==1)
        {
        cout<<"enter dimes you have:";
        cin>>change[idx];
        change[idx]=change[idx]*0.10;
        }
        if(idx==2)
        {
        cout<<"enter nickels you have:";
        cin>>change[idx];
        change[idx]=change[idx]*0.05;
        }
         if(idx==3)
        {
        cout<<"enter pennies you have:";
        cin>>change[idx];
        change[idx]=change[idx]*0.01;
        }
     }
     for(int idx=0;idx<4;idx++)
     {
        sum=sum+change[idx];
       
     }
    if (sum>=due) 
    {
        cout<<"true";
    } 
    else
    {
        cout<<"false";
    }   
     
}
      
        
