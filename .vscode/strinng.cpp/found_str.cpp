#include<iostream>
using namespace std;
 int found_str(string str,string target)
 {
     int res=str.find(target);
     if(res==string::npos){
         return -1;

     }
     else 
     return res;
 }
int main()
{
    string str;
    cin>>str;
    string target;
    cin>>target;
    cout<<found_str(str,target);
    return 0;

    
}