#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = { 0 };
	int search = 0;

	cout << "Enter the 5 elements for the array" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". ";
		cin >> arr[i];
	}

	cout << "Enter the element to search: ";
	cin >> search;

	bool found = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == search)
		{
			found = 1;
			break;
		}
	}
	if (found)
		cout << "The element " << search << " found" << endl;
	else
		cout << "The element not found" << endl;


	return 0;
}