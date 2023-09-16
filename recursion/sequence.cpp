//  recursively find the nth term of the series S that is given by:
//S(n) = n+ n*(S(n-1)) and S(0) = 1
#include<iostream>
using namespace std;
int sequence(int n)
{
    if (n==0)
    return 1;
    return n+n*(sequence(n-1));

}
int main()
{
    cout<<sequence(3);
    return 0;
}