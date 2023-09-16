#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for(int k=n;k>=1;k--){
        for (int j =i; j >=1; j--)

        {
             cout << k;
        }  cout<<" ";
        }
       cout<<endl;
    }
}