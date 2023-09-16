#include<bits/stdc++.h>
using namespace std;
vector<int >findDuplicate(int arr[],int n)
{
    vector<int>ans;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto m:mp)
    {
        if(m.second>1)
        {
            ans.push_back(m.first);
        }}
        if(ans.size()==0)
        ans.push_back(-1);
        sort(ans.begin(),ans.end());
        return ans;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>res=findDuplicate(arr,n);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
return 0;
}