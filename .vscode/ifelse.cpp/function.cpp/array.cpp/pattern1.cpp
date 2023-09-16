#include<iostream>
using namespace std;
int main()
{
    int n;
    int count =0;
    cout<<"Enter only even no. to print this pattern "<<endl ;
    cin>>n;
    for(int i=(n+1)/2;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=(n+1)/2;j++)
        {
           if(j>=j-count)
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
        count++;
    }
}