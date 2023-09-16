#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==1)
    return 1;
    int small=factorial(n-1);
    return n*small;
}
int main()
{
    cout<<factorial(2);
    return 0;
}