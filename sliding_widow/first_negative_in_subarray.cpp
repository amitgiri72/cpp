#include<bits/stdc++.h>
using namespace std;

void  firstinteger(int  arr[],int n,int k)
{
    int i,j=0;
    deque<int>ans;
    // vector<int>res;
    while(j<n)
    {
        if(arr[j]<0)
        {
        ans.push_back(arr[j]);
        }
        if(j-i+1<k)
        {
        j++;
        }
        else if(j-i+1==k)
        {
            if(ans.size()==0)
            // res.push_back(0);
            cout<<"0";
            else
            {
                // res.push_back(ans.front());
                cout<<ans.front()<<" ";
                if(arr[i]<0){
                ans.pop_front();}
            }
            j++;
            i++;
        }
    }
    // return res;
}
int main()
{
    int arr[]={12,-1,-7,-8,-15,30,16,28};
    firstinteger(arr,8,3);
    // vector<int>result=firstinteger(arr,8,3);
    // for(int i=0;i<result.size();i++)
    // {
    //     cout<<result[i]<<" ";
    //     cout<<"giri";
    // }
    // cout<<"amit";
    return 0;
}
