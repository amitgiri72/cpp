#include<iostream>
using namespace std;
int main()
{   cout<<"enter a num";
    int n;
    cin>>n;
    int count =0;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
  
    cout<<count;
   return 0; 
}