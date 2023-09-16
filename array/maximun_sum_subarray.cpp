#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int n)
{
    int sum=0,maxi=0;
    for(int i=0;i<n;i++)
    {   for(int k=i;k<n;k++){
        for(int j=i;j<=k;j++)
        {
            sum+=arr[j];
        }
            maxi=max(sum,maxi);
            sum=0;
    }
    }
    return maxi;
}
int main()
{
     int array[]={1,2,3,4,5};
     cout<<maxsum(array,5);
    return 0;
}