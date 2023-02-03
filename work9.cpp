#include<iostream>
using namespace std;
main()
{
        
      string word;
      int counter=0;
      cout<<"enter string:";
      getline(cin,word);
      int sum=0;
      while(word[counter]!='\0')
      {
        counter++;
      }
      cout<<"length is:"<<counter<<endl;
      if(counter%2==0)
      {
        cout<<"length is even";
      }
      else
      {
        cout<<"lenght is odd";
      }
       
}
      
        
