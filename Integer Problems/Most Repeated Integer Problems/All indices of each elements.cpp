#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int arr[size] = { 12, 14, 15, 12, 16, 12, 15, 10, 10, 8 };

	int arr_str[size] = { 0 };

	for (int i = 0; i < size; i++)
	{
		if (arr_str[i] == arr[i])
			continue;

		cout << arr[i] << " index/es: ";
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << j << " ";
				arr_str[j] = arr[j];
			}
		}
		cout << endl;
	}


	return 0;
}