#include<iostream>
using namespace std;
main()
{
        
        int array1[2];
        int size=0;
        
        cout<<"enter size of 2nd array:";
        cin>>size;
        int array[size];
        for(int idx=0;idx<2;idx++)
        {
             cout<<"enter "<<idx+1<<" number for ist array:";
             cin>> array1[idx]; 
        }
        
        for(int idx=0;idx<size;idx++)
        {
            cout<<"enter number for 2nd array:";
            cin>> array[idx];

        }
     cout<<"{"<<array1[0]<<",";  
       for(int idx=0;idx<size;idx++)
       {
        cout<<array[idx]<<",";
       }
     cout<<array1[1] <<"}";
        
}