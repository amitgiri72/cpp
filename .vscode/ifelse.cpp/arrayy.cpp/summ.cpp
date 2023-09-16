#include<iostream>
using namespace std;
void sum(int arr[],int n){
    int sum=0;
    // int n;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
sum(arr,n);
return 0;
}