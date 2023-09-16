#include<iostream>
using namespace std;
int main()
{
    int op,a,b;
    cout<<"enter for sum=1\nsubstraction=2\nmultiplicitation=3\ndivision=4\n";
    cout<<"enter a operation ";
    cin>>op;
    cout<<"enter a input";
    cin>>a>>b;
    switch (op)
    {
    case 1:
        cout<<a+b;
        break;
    case 2:
    cout<<a-b;
    break;
    case 3:
    cout<<a*b;
    break;
    case 4:
    cout<<a/b;
    break;
    default :
    cout<<"enter a wrong operation";
    }
    return 0;
}