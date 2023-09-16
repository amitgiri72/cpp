#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int sortted=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                sortted=true;
            }
        }
        if(sortted==false)
            break;
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
    int arr[]={10,8,20,5,99,0,2,20,4};
    bubbleSort(arr,9);
    print(arr,9);
    return 0;
}
