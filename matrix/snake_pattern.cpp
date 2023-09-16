#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &arr)
{    
    bool flag =true;
    stack<int>s;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {   
            if(flag == true)
            cout<<arr[i][j]<<" ";
            else{
            s.push(arr[i][j]);
            // while(!s.empty()){
            // cout<<s.top()<<" ";
            
            
            // s.pop();
            // }
            }
        }
        while(!s.empty()){
            cout<<s.top()<<" ";
            
            
            s.pop();
            }
        if(flag==true)
        flag=false;
        else flag =true;
        
    }
    
}

int main()
{
    vector<vector<int>>arr;
    for (int i = 0; i < 4; i++)
    {   
        vector<int>v;
        for (int j = 0; j < 2; j++)
        {
            int n;
            cin>>n;
            v.push_back(n);
        }
        arr.push_back(v);
        
    }
    print(arr);
    return 0;
}