#include <iostream>
using namespace std;

int main()
{
	int arr[10] = { 12, 14, 15, 12, 16, 12, 15, 10, 10, 8 };

	cout << "Array Elements: ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int arr_str[10] = { 0 };		// Used to skip the read element/s
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		count = 0;
		if (arr_str[i] == arr[i])
		{
			continue;
		}
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
				arr_str[j] = arr[j];
			}
		}
		cout << arr[i] << " appears " << count << " times" << endl;
	}


	return 0;
}