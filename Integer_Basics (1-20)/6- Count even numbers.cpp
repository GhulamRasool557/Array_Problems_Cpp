#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = { 0 };

	cout << "Enter the 5 elements for the array" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". ";
		cin >> arr[i];
	}

	int even = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
			even++;
	}
	cout << "Count of even element/s is " << even << endl;


	return 0;
}