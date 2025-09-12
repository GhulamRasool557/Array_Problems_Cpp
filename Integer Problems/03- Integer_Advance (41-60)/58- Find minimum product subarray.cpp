#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = { 2, 3, -2, 4, -1 };

	int maxEndingHere = arr[0];
	int minEndingHere = arr[0];
	int minProduct = arr[0];   

	for (int i = 1; i < size; i++)
	{
		// If current element is negative, swap max and min
		if (arr[i] < 0)
		{
			int temp = maxEndingHere;
			maxEndingHere = minEndingHere;
			minEndingHere = temp;
		}

		// Update maxEndingHere
		if (arr[i] > maxEndingHere * arr[i])
			maxEndingHere = arr[i];
		else
			maxEndingHere = maxEndingHere * arr[i];

		// Update minEndingHere
		if (arr[i] < minEndingHere * arr[i])
			minEndingHere = arr[i];
		else
			minEndingHere = minEndingHere * arr[i];

		// Update global minProduct
		if (minEndingHere < minProduct)
			minProduct = minEndingHere;
	}
	cout << "Minimum product subarray is: " << minProduct << endl;


	return 0;
}