#include<iostream>
using namespace std;
void name(int n)
{
    if(n<1)
    {
        return;
    }
    cout<<"amit\n";
    name(n-1);

}
int main()
{
    name(5);
    return 0;
}
