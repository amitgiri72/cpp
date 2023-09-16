// check array sorted or not
#include <iostream>
using namespace std;
bool sorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int n;
    cout << "enter a legnth";
    cin >> n;
    int arr[n];
    cout << "enter the value of array";
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int b : arr)
        cout << b << " ";
    cout << "\n";
    if (sorted(arr, n) == false)
        cout << "not sorted";
    else
        cout << "sorted";

    return 0;
}