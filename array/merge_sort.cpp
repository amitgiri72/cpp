#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[low+i];
    }
    for(int j=0;j<n2;j++)
    {
        right[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=low;
    while (i<n1 && j<n2) 
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            k++;
        }
    }
        while (i<n1)
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        while (j<n2)
        {
           arr[k]=right[j];
            j++;
            k++; 
        }
        
        
    
    
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort (arr,m+1,r);
        merge(arr,l,m,r);

    }
}
void print(int arr[],int n)
{ 
    // 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
 int main(){
    int arr[]={66,88,54,3,7,9,2};
     int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    print(arr,n);
    return 0;
    
 }
