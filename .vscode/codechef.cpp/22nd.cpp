#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int count =0;
	for(int i=0;i<t;i++)
	{int x,y;
	    cin>>x>>y;
	    
	
	if(x<y)
	{
	    while(x=y){
	    x=x+1;
	    count ++;}
	}
	else if(y<x)
	{
	    while(y=x)
	    {
	        y=y+2;
	        count++;
	    }
	}
	else 
	cout<<"0";
	cout<<count;}
	
	return 0;
}
