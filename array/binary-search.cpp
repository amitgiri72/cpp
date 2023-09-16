#include<iostream>
using namespace std;
int 
binary_search(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid] > key)
        end=mid-1;
        else
        start=mid+1;
        // start++;
        // end--;
    }
    return -1;
    
}
int main()
{
    int array[]={2,3,4,6,7,9};
    cout<<binary_search(array,6,9);
    return 0;
    
}