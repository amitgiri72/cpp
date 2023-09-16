// find legnth of string using function
#include<iostream>
using namespace std;
  int legnth_of_string(string name){
    return name.length();

}
int main()
{
    string name;
    cout<<"enter the string\n";
    cin>>name;
    cout<<legnth_of_string(name);
    return 0;
}