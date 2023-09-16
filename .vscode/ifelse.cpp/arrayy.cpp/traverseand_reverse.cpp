#include <vector>
#include <iostream>
using namespace std;

vector<int> traversal_reverse(vector<int> arr)
{
    int c = 0;
    int d = arr.size() - 1;
    while (c <= d)
    {
        swap(arr[c], arr[d]);
        c++;
        d--;
    }
    return arr;
}
void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i]<<" ";
   cout<<endl;
}
int main()
{
    vector<int> v;
    int n;
    int a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    vector<int> ans = traversal_reverse(v);
    print(ans);
}