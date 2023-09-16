// average of array
#include <iostream>
using namespace std;
// creating a function average
int average(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int average = sum / n;
    return average;
}
int main()
{ // for enter the legnth
    int n;
    cin >> n;
    // for enter the value
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // calling the function average
    cout << average(arr, n);
    return 0;
}