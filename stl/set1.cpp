
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <int >s;
    // s.insert(4);
    // s.insert(7);
    // s.insert(2);
    // s.insert(8);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    // auto it=s.begin();
   // cout<<*s.begin()<<endl;//for print first element in set
    // for(auto it=s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<"\n";
    // }

//both for loop are correct and iterate the set
    for(int a:s)
    {
        cout<<a<<endl;
    }
    
  //we use same method for inserting and iterating the vector but in a map for inserting use pair
    return 0;
}