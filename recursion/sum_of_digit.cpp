#include<iostream>
using namespace std;
int sum(int n)
{
    if(n/10==0)
    return n%10;
    // int small =sum(n/10);
    // return n%10+small;   both are right
    return n%10+sum(n/10);

}
int main()
{
    cout<<sum(1234);
    return 0;
}