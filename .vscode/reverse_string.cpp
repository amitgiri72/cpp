// reverse a string
#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string newstring ="";
    
    int l=str.length()-1;
    while (l>=0)
    {
        newstring = newstring+str[l];

        l--;
    }
    cout<<newstring;
    return 0;
    }