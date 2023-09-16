//haore's partition for quick sort
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int h)
{
    
    int i=l-1,j=h+1;
    int pivot=arr[l];
    while(true)
    {
        do
        {
            i++ ;
        } while (arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i>=j)
        return j;
        swap(arr[i],arr[j]);
        
    }
}
int main()
{
    int arr[]={5,3,8,4,2,7,1,0};
    cout<<partition(arr,0,7);
    return 0;
}