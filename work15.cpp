#include<iostream>
using namespace std;
main()
{
        int size;
        cout<<"enter size";
        cin>>size;
        int idx=0;
        int number[idx];
        for(int idx=0;idx<size;idx++)
        {
            cout<<"enter a number";
            cin>> number[idx];
             
        }
        for(int idx=size-1;idx>=0;idx--)
        {
            cout<<number[idx]<<" ";
        }
       
      
        
}