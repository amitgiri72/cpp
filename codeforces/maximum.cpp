#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] <arr[i+1])
        { if(i+1 ==n)break;
        count++;}
        else if(arr[i]>=arr[i+1]){
        count=1;
        
        }
    }
    cout<<count;
    return 0;
}