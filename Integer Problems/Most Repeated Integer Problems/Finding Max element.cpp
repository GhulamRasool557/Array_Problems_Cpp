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

	int maxNum = arr[0]; 

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > maxNum)
		{
			maxNum = arr[i];
		}
	}

	cout << "The maximum number is " << maxNum << endl;

	delete[] arr;


	return 0;
}