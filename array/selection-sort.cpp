#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {   
        int mini =arr[i];
        int minIndex=i;
        for(int j=0;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                
            }
        }
    }
    
    
}