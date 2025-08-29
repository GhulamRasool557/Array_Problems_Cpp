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

	cout << "Displaying the elements" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}