#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int update_at_index(int arr[],int size,int index,int value)
{
   return  arr[index]=value;
}
int main()
{
    int arr[4]={};
    update_at_index(arr,4,2,99);
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

