#include<iostream>
using namespace std;

int main()
{
	const int size = 10;
	int arr[size] = { 0, 1, 2, 0, 1, 2, 1, 0, 2, 1 };

	int low = 0, mid = 0, high = size - 1;

	while (mid <= high)
	{
		if (arr[mid] == 0)
		{
			int temp = arr[low];
			arr[low] = arr[mid];
			arr[mid] = temp;

			low++;
			mid++;
		}
		else if (arr[mid] == 1)
		{
			mid++;
		}
		else 
		{
			int temp = arr[mid];
			arr[mid] = arr[high];
			arr[high] = temp;

			high--;
		}
	}

	cout << "Sorted array: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	return 0;
}