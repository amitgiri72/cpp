#include<bits/stdc++.h>
using namespace std;

void rearrange(vector<vector<int>>&arr)

{

    vector<int>visited1(4,-1) ;
    vector<int>visited2(3,-1) ;
      for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==0){
            visited1[i] = 0;
            visited2[j] = 0;}
        }
    }


    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(visited1[i]== 0 || visited2[j]==0)
            {

                
                arr[i][j] = 0;
            }
        }
    }

   
}
int main()
{

    vector<vector<int>>arr;
 arr = {{1,1,0}, {1,1,1},{2, 3,1}, {1,1,1}};
for(int i=0;i<4;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr[i][j];
    }
    cout<<"\n";
}
   rearrange(arr);
cout<<"after changing \n";
   for(int i =0;i<4;i++)
   {
    for(int j=0;j<3;j++)
    {
        cout<<arr[i][j];
    }
    cout<<endl;
   }
return 0;
}