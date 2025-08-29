#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = { 0 };
	int search = 0;
	int low = 0, high =  size - 1, mid = 0;
	bool found = 0;

	cout << "Enter the 5 elements for the array" << endl;
	cout << "Note: The elements should be sorted" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". ";
		cin >> arr[i];
	}

	cout << "Enter the element to search: ";
	cin >> search;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (search == arr[mid])
		{
			found = 1;
			break;
		}
		else if (search > arr[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	if (found)
		cout << "The element " << search << " found" << endl;
	else
		cout << "The element " << search << " not found" << endl;


	return 0;
}