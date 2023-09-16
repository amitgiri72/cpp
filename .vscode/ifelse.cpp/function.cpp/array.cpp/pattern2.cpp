#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    for(int row=1;row<=m;row++)
    {
        for(int col=1;col<=m-row+1;col++)
        {
            cout<<"$";
        }
        cout<<endl;
    }
    return 0;
}