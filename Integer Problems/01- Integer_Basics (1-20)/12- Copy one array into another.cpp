#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = { 0 };
	int copyArray[size] = { 0 };

	cout << "Enter the 5 elements for the array" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". ";
		cin >> arr[i];
	}

	int end = (size - 1);
	for (int i = 0; i < size; i++)
	{
		copyArray[i] = arr[end];
		end--;
	}

	cout << "After copying the array" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << copyArray[i] << " ";
	}
	cout << endl;

	
	return 0;
}