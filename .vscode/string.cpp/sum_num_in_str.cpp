// in this program we find sum present in string
#include<iostream>
using namespace std;
void find_sum(string name)
{  string temp="";
         string sum=0;
   for(char ch : name)
   {
       if(isdigit(ch))
       temp +=ch;
   }
   for(int i=0;i<temp.length();i++)
   {
       
       sum+=temp;
   }
 cout<<sum;
}
int main()
{
    string name;
    cin>>name;
    find_sum(name);
    return 0;
}