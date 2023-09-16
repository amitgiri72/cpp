// reverse the array
#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s = 0, e = v.size()- 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
        }

        return v;
    
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] <<" ";
        cout<<endl;
}

int main()
{

    vector<int> v;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {   cin>>a;
        v.push_back(a);
    }

    // v.push_back(11);
    // v.push_back(7);
    // v.push_back(3);
    // v.push_back(12);
    // v.push_back(4);
    // cin>>n;
    // v.push_back(n);
    //   for(int i=0;i<v.size();i++)
    //  v.push_back(n);
    vector<int> ans = reverse(v);
    cout<<"reverse array"<<endl;
    print(ans);

    return 0;
}
