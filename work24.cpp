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
        if(word[i]!='a'&&word[i]!='e'&&word[i]!='i'&&word[i]!='o'&&word[i]!='u'&&word[i]!='A'&&word[i]!='E'&&word[i]!='I'&&word[i]!='O'&&word[i]!='U')
        {
           cout<<word[i]; 
        }
      }
     
}
      
        
