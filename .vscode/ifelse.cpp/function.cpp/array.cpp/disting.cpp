// check element disting or not
// check array sorted or not
#include <iostream>
using namespace std;
int check_distinct(int arr[], int n)
{
    int count = 0;
    bool is_disitnct = true;
    for (int i = 0; i < n; i++)
    {
        is_disitnct = true;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {

                is_disitnct = false;
                break;
            }
        }

        if (is_disitnct == true)
            count++;
    }
    return count;
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
    cout << "\n";
    cout << check_distinct(arr, n);

    return 0;
}