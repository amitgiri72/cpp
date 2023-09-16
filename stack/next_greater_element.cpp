#include<bits/stdc++.h>
using namespace std;

vector<int > next_greater(int arr[],int n)
{
    vector<int>v;
    int maxi=-1;
    for(int i=0;i<n-1;i++)
    {
        maxi=-1;
        
        for(int j=i+1;j<n;j++)
        if(arr[j] >arr[i])
        {
            maxi=arr[j];
            v.push_back(maxi);
            break;
        }
        
        

    }
    return v;
}
int main()
{
    int arr[]={2,4,1,6,3,5,99};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"next greater element : ";
    vector<int>ans=next_greater(arr,n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}