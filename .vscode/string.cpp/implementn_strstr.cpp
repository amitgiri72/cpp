#include<iostream>
using namespace std;
void strstr(string main, string target)
{   int a=main.find(target);
    if(a==main.find(target))
    {
        cout<<a;
    }
    else{
    cout<<"-1";
  
    }
}
int main()
{
    string str,target;
    cin>>str>>target;
    strstr(str,target);
}