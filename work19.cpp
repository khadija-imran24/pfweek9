#include<iostream>
using namespace std;
main()
{
        
        int size=0;
        int num=0;
        cout<<"enter size";
        cin>>size;
         int number[size];
         int smallest=number[0];
        for(int idx=0;idx<size;idx++)
        {
            cout<<"enter a number";
            cin>> number[idx];
           
           if(number[idx]<smallest)
           {
            smallest=number[idx];
           }
        }
        cout<<"smallest number is :"<<smallest;
     
       
}
      
        
