#include<iostream>
using namespace std;
int one_to_n(int i,int n){
    if(i>n)
    return false;
    
    cout<<i<<"\n";
    return one_to_n(i+1,n);

}
int main()
{
    one_to_n(1,5);
    return 0;
}