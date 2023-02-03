#include<iostream>
using namespace std;
main()
{
    string word;
    char letter;
    int idx=0;
    bool isfound=false;
    cout<<"enter words";
    cin>>word;
    cout<<"enter letter";
    cin>>letter;
    while(word[idx]!='\0')
    {
        if(word[idx]==letter)
        {
            isfound=true;
        }
        idx++;
    
    }
    if(isfound==true)
    {
        cout<<"found";
    }
        else
        {
            cout<<"not found";
        }
        

}