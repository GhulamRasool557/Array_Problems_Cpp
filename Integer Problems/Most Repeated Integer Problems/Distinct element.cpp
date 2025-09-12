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

	cout << "Distinct elements are: ";
	for (int i = 0; i < n; i++)
	{
		bool isDuplicate = false;

		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				isDuplicate = true;
				break;
			}
		}

		if (!isDuplicate)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;

	delete[] arr;


	return 0;
}