#include<iostream>
using namespace std;
void fun(int *v)
{
    *v=*v+5;
    
}
int main()
{
    int v=10;
    fun(&v);
    cout<<v;
    return 0;
}