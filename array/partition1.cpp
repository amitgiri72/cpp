//naive approach for partition
#include<bits/stdc++.h>
using namespace std;
void partition(int arr[],int l,int h,int p)
{
    int temp[h-l+1],index =0;
    for(int i=l;i<=h;i++)
    {
        if(arr[i]<=arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++)
    {
        if(arr[i]>arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++)
    {
        arr[i]=temp[i-l];   
         }
}
void print (int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={5,13,6,9,12,11,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    partition(arr,0,n-1,n-1);
    print(arr,n);
    return 0;
}