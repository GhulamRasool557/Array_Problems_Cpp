#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int arr[size] = { 2, 3, -2, 4, -1, 0 };

	int maxProduct = arr[0];
	int maxEndingHere = arr[0];
	int minEndingHere = arr[0];

	for (int i = 1; i < size; i++)
	{
		int tempMax = maxEndingHere;
		int tempMin = minEndingHere;

		// compute possible products
		int p1 = arr[i];
		int p2 = tempMax * arr[i];
		int p3 = tempMin * arr[i];

		// update maxEndingHere manually
		maxEndingHere = p1;
		if (p2 > maxEndingHere) maxEndingHere = p2;
		if (p3 > maxEndingHere) maxEndingHere = p3;

		// update minEndingHere manually
		minEndingHere = p1;
		if (p2 < minEndingHere) minEndingHere = p2;
		if (p3 < minEndingHere) minEndingHere = p3;

		// update overall maxProduct
		if (maxEndingHere > maxProduct)
			maxProduct = maxEndingHere;
	}
	cout << "Maximum product subarray is: " << maxProduct << endl;


	return 0;
}