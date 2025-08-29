#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int arr[size] = { 12, 35, 1, 10, 34, 1 };

	int first = arr[0];
	arr[0] = arr[size - 1];
	arr[size - 1] = first;

	cout << "Displaying the Array: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	return 0;
}