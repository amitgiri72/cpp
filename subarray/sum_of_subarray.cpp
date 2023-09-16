#include <bits/stdc++.h>
using namespace std;
void sum_subarray(int arr[], int n, int sum)
{
    int count = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        s = 0;
        for (int j = i; j < n; j++)
        {
            s += arr[j];
            if (s == sum)
            {
                count++;
            }
        }
    }
    cout << "subarray of sum " << sum << ": " << count;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 5, 4, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sum_subarray(arr, n, 3);
    return 0;
}
