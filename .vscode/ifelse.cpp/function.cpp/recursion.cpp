#include<iostream>
using namespace std;
void fun(int a)
{
    if(a==0)
    return;
    else
    {
        cout<<"amit"<<endl;
        fun(a-1);
    }
    
}
int main()
{
    fun(4);
    return 0;
}