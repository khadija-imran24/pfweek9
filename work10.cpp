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
   for(int i=counter-1;i>=0;i--)
   {
    cout<<word[i];
   }
}
      
        
