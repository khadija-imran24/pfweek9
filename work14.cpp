#include<iostream>
using namespace std;
main()
{
      string word;
      int count=0;
      cout<<"enter string:";
      getline(cin,word);
      int counter=word.length();
      for(int i=0;i<counter;i++)
      {
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
        {
            count=count+1;
        }
      }
     cout<<"number of vowel is :"<<count;
}
      
        
