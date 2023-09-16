#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key;
        key = arr[i];
        int j=i-1;
        while( j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    cout<<"Array elements after the sorting\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cout<<"Enter the no. of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"\nElements before sorting\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    insertionSort(arr,n);
    return 0;
}