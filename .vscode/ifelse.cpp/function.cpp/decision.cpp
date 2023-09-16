#include<iostream>
using namespace std;
void comparefive(int x)
{
    if(x<5)
    cout<<x<<" is less than 5";
    else if(x>5)
    cout<<x<<" is greater than 5";
    else
    cout<<x<<" is equal to 5";
}
int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
    comparefive(num);
    return 0;
}