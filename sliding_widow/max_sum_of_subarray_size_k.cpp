#include<bits/stdc++.h>
using namespace std;
int max_sum_subarray(int arr[],int n,int k)
{
    int sum=0;
    int i=0,j=0;
    int mx=INT_MIN;
    while(j<n)
    {
        sum+=arr[j];
        if(j-i+1<k)
        {
            j++;
        }
        else if(j-i+1==k)
        {
            mx=max(mx,sum);
            sum-=arr[i];
            j++;
            i++;
        }
    }
    return mx;

}
int main()
{
    int arr[]={100,200,300,400};
    cout<<max_sum_subarray(arr,4,2);
    
    return 0;
}