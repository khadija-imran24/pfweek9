#include<iostream>
using namespace std;
main()
{
        bool isfound=false;
        int size;
        int num;
        cout<<"enter size";
        cin>>size;
        int number[size];
        for(int idx=0;idx<size;idx++)
        {
            cout<<"enter a number";
            cin>> number[idx];
             
        }
       cout<<"enter any number you want to find:";
       cin>>num;
       for(int idx=0;idx<size;idx++)
       {
          if(number[idx]==num)
          {
            isfound=true;
            break;
          }
       }
           if(isfound==true)
           {
            cout<<"already entered";
          }
          else
          {
            cout<<"not entered";
          }
       }
       
       
      
        
