// find maximum in array
#include <iostream>
using namespace std;
// creating a function max_array
int max_array(int arr[], int n)
{
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > ans)
            ans = arr[i];
    }
    return ans;
}
int main()
{ // for enter a legnth of array
    int n;
    cin >> n;
    // for enter a value of array
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // calling function max_array
    cout << max_array(arr, n);
    return 0;
}