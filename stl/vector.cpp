// given n numbers in input print 2 lines ,first line for all even integers and second line for all odd integers
#include <bits/stdc++.h>
using namespace std;
pair<vector<int>, vector<int>> sort_odd_even(vector<int> v)
{
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
            even.push_back(v[i]);
        else
            odd.push_back(v[i]);
    }
    sort(even.begin(), even.end());//for sorting in vector using sort function
    sort(odd.begin(), odd.end());
    return {even, odd};//we take pair type function so we can return two element
}
int main()
{
    vector<int> v = {55, 22, 3, 7, 2, 4, 88, 99, 1};
    // cout<<sort_odd_even(v);//we can not use this line
    pair<vector<int>, vector<int>> vvv = sort_odd_even(v);
    for (int i = 0; i < vvv.first.size(); i++)//for iteration of first element(data type) in the pair ,that is vector
    {
        cout << vvv.first[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < vvv.second.size(); i++)//for iteration of second element(data type) in the pair ,that is vector
        cout << vvv.second[i] << " ";
    cout << endl;
    cout << vvv.first.size();

    return 0;
}