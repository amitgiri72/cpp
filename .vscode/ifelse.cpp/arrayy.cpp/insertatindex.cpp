// inseret an element in given index
#include <iostream>
using namespace std;
void insert_at_index(int arr[], int n, int pos, int value)
{
    n++;
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    cout << "modified array\n";
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;

    int pos, value;
    cout<<"enter the size of array\n";
    cin >> n;
    int arr[n];
    cout<<"enter "<<n-1<<" element\n";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    cout<<"enter the position less than or equal to "<<n-1<<endl;
    cin >> pos;
    cout<<"enter the value\n";
     cin>> value;
    insert_at_index(arr, n, pos, value);
    return 0;
}