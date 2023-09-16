#include <iostream>
using namespace std;
void countoddeven(int arr[], int n)
{
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
            odd++;
    }
    cout << even << " " << odd;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    countoddeven(arr, n);
    return 0;
}