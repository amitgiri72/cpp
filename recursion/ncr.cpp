// You are given two numbers n and r. You need to find nCr.
// nCr = (n!) / ((n-r)!*(r!))
// In recursive way, we can write nCr as nCr = (n-1)C(r-1) + (n-1)Cr
#include<iostream>
using namespace std;
int factorial(int num)
{
    if(num==1)
    return 1;
    return num*factorial(num-1);
}

int ncr(int n,int r)
{
    return (factorial(n))/((factorial(n-r))*(factorial(r)));
}
int main()
{
    int n=4;
    int r=1;
    cout<<(factorial(n))/((factorial(n-r))*(factorial(r)));
    return 0;
}