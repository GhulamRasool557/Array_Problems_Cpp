#include<iostream>
using namespace std;

int main()
{
	const int size = 10;
	int arr[size] = { 0 };

	cout << "Enter the 10 elements for the array" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". ";
		cin >> arr[i];
	}

	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Maximum element of the array is " << max << endl;


	return 0;
}