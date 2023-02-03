#include<iostream>
using namespace std;
main()
{
        
        int size=0;
        int num=0;
        cout<<"enter size";
        cin>>size;
        cout<<"enter number you want to multiply";
        cin>>num;
        int number[size];
        for(int idx=0;idx<size;idx++)
        {
            cout<<"enter a number";
            cin>> number[idx];
            number[idx]=number[idx]*num;
        }
       for(int idx=size-1;idx>=0;idx--)
       {
        cout<<number[idx]<<" ";
       }
}
      
        
