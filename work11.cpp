#include<iostream>
using namespace std;
main()
{
      char letter;  
      string word;
    
      cout<<"enter string:";
      getline(cin,word);
      cout<<"enter letter:";
      cin>>letter;
      int counter=word.length();
      if(word[counter-1]==letter)
      {
        cout<<"true";
      }
      else 
      {
        cout<<"false";
      }
 
}
      
        
