#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter how many numbers: ";
	cin >> n;

	int* arr = new int[n];

	cout << "Enter " << n << " numbers:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "Even numbers: ";
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;

	cout << "Odd numbers: ";
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;

	delete[] arr;


	return 0;
}