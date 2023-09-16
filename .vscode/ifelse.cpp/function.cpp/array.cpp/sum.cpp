// sum of array
#include <iostream>
using namespace std;
// creating a function sum
int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{ // for enter the legnth
    int n;
    cin >> n;
    // for enter the value
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // calling the function sum
    cout << sum(arr, n);
    return 0;
}