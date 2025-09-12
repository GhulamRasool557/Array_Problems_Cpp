#include<iostream>
using namespace std;

int main()
{
	const int size = 20;
	int arr[size] = { 10, 15, 9, 30, 20, 5, 12, 50, 40, 2, 14, 25, 45, 60, 80, 42, 22, 86, 28, 47 };

	// Sorting 
	int temp = 0;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << "After sorting: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	return 0;
}