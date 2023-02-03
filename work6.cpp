#include<iostream>
using namespace std;
main()
{
        int avg=0;
        int size;
        int idx=0;
        int sum=0;
        cout<<"enter size";
        cin>>size;
        int number[idx];
        for(int idx=0;idx<size;idx++)
        {
            cout<<"enter a number";
            cin>> number[idx];
            sum=sum+number[idx];
        }
       
        avg=sum/size;
        cout<<"the sum is:"<<sum;
        cout<<"the average is:"<<avg;
        
}