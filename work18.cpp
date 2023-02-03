#include<iostream>
using namespace std;
main()
{
        
        int size=0;
        cout<<"enter size";
        cin>>size;
        int number[size];
        int largest=number[0];
        for(int idx=0;idx<size;idx++)
        {
            cout<<"enter a number";
            cin>> number[idx];
           if(number[idx]>largest)
           {
            largest=number[idx];
           }
        }
        cout<<"largest number is :"<<largest;
     
       
}
      
        
