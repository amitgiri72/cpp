#include<iostream>
using namespace std;
void printdetails(int id ,string name="na",string address="na")
{
cout<<"id is "<<id<<"\n";
cout<<"name is "<<name<<"\n";
cout<<"address is "<<address<<"\n";     
}
int main()
{
    int id; string name,address;
    cout<<"enter a id, name, address";
    cin>>id>>name>>address;
    printdetails(id,name,address);
    printdetails(555," anii");

    
    return 0;
}