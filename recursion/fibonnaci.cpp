// fibonnaci number using recursion
#include<iostream>
using namespace std;
int fibonnaci(int n )
{
    if(n==1 or n==2)
    return 1;

    return fibonnaci(n-1)+fibonnaci(n-2);
}
    int main()
    {
        cout<<fibonnaci(0);
        return 0;
    }
