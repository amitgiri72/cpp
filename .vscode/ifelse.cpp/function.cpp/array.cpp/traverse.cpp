#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the legnth of array";
    cin >> n;
    int arr[n];
    cout << "enter the value of array";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}