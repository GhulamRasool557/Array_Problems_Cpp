#include<iostream>
using namespace std;

int main()
{
	const int size = 7;
	int arr[size] = { 10, 20, 30, 40, 50, 60, 70 };
	int temp[size];

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}

	int start = 0, end = size - 1;
	int k = 0;

	while (start <= end)
	{
		if (k < size) temp[k++] = arr[end--]; 
		if (k < size) temp[k++] = arr[start++]; 
	}

	for (int i = 0; i < size; i++)
	{
		arr[i] = temp[i];
	}

	cout << "Array in alternating max/min order: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	return 0;
}