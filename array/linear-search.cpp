#include<bits/stdc++.h>
using namespace std;
int selectin_search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
            return i;
    }
    return -1;
}
int main()
{
   int arr[]={4,5,6,5,24,5,6,55,7} ;
   int ans=selectin_search(arr,9,59);
   if(ans==-1)
    cout<<"not found";
   else
    cout<<ans;
    return 0; 
} 



