#include<iostream>
using namespace std;
int isleap(int N)
{ 
    if ((N%4==0 and N%100!=0)or N%400==0)
    return 1;
    else
    return 0;
}
int main()
{
    int year;
    cout<<"enter a year";
    cin>>year;
    cout<<isleap(year);
    return 0;
}