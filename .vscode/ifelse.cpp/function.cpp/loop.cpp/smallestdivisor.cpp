#include<iostream>
using namespace std;
void smallestdivisor(int a)

{
    for(int i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            cout<<i;
            break;
        }
    }
}
int main()
{
    int a;
    cout<<"enter a value";
    cin>>a;
    smallestdivisor(a);
    return 0;
}
