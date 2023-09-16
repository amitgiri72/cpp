#include <iostream>
using namespace std;

int main() {
	// your code goes here
int arr[4]={0,0,0,0};
int res=4;
for(int i=0;i<4;i++)
{
    cin>>arr[i];
}
for(int i=0;i<4;i++)
{
    if(arr[i]<10)
    {
    res=res-1;
    }
    
}
	cout<<res;
	return 0;
}
