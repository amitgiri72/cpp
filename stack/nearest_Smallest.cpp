#include<bits/stdc++.h>
using namespace std;
int next_smallest(int arr[],int n)
{
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mini)
        mini=arr[i];

    }
    return mini;
}
int main()
{
    int arr[]={5,5,3,9,2,85,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"nearest smallest element : "<<next_smallest(arr,n);
    return 0;
}