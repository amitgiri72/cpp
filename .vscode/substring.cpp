#include <iostream> 
using namespace std;
int substring(string str,int l,int r){
  
    string new=str.substr(l,r);
    return 'new';
}
int main()
{
    string str;
    cin>>str;
    int l,r;
    cout<<substring(str,l,r);
    return 0;
}