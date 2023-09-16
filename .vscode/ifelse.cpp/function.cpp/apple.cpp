#include<iostream>
using namespace std;
void utility(int N)
{
    if(N%2!=0)
    cout<<"You";
    else
    cout<<"Friends";
}
int main()
{
    int apple;
    cin>>apple;
    utility(apple);
    return 0;
}