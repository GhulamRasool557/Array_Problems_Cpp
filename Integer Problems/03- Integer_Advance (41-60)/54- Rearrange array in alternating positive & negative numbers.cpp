#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int arr[size] = { 2, 3, -4, -1, 6, -9 };

	int pos[size], neg[size];
	int p = 0, n = 0;

	// Step 1: Separate positives and negatives
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 0)
			pos[p++] = arr[i];
		else
			neg[n++] = arr[i];
	}

	// Step 2: Merge alternately
	int i = 0, j = 0, k = 0;
	while (i < p && j < n)
	{
		arr[k++] = pos[i++];
		arr[k++] = neg[j++];
	}

	// Step 3: If any remain
	while (i < p)
		arr[k++] = pos[i++];
	while (j < n)
		arr[k++] = neg[j++];

	// Print result
	cout << "Rearranged array: ";
	for (int x = 0; x < size; x++)
		cout << arr[x] << " ";
	cout << endl;


	return 0;
}