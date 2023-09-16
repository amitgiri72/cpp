// recursive sum of number
#include<iostream>
using namespace std;
int recursive_sum(int n)
{
    if(n==1)
    return 1;
    return n+recursive_sum(n-1);

}
int main()
{
    cout<<recursive_sum(4);
    return 0;
}