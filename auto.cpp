#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    auto a=5;
    auto b=6.6;
    cout<<a+b<<"\n";
    cout<<typeid(a).name()<<"\n";
    cout<<typeid(b).name();
    return 0;

}