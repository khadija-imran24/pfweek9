#include<iostream>
using namespace std;
main()
{
        int size;
        cout<<"enter size";
        cin>>size;
        int number[size];
        for(int idx=0;idx<size;idx++)
        {
            cout<<"enter a number";
            cin>> number[idx];
        }
        for(int idx=0;idx<size;idx++)
        {
            cout<<number[idx]<<" ";
        }
        
}