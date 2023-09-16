#include<iostream>
using namespace std;
int countt(int n)
{
   if(n/10==0)
   return 1;
   return 1+countt(n/10);
   }
int main()
{
    cout<<countt(99999);
   
    return 0;
}