// C++ program to find minimum number of steps to
// convert a given sequence into a permutation

#include <bits/stdc++.h>
using namespace std;

// Function to find minimum number of steps to
// convert a given sequence into a permutation
int get_permutation(int arr[], int n)
{
	// Sort the given array
	sort(arr, arr + n);

	// To store the required minimum
	// number of operations
	int result = 0;

	// Find the operations on each step
	for (int i = 0; i < n; i++) {
		result += abs(arr[i] - (i + 1));
	}

	// Return the answer
	return result;
}

// Driver code
int main()
{
	int arr[] = { 0,3,3};

	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	cout << get_permutation(arr, n);

	return 0;
}
