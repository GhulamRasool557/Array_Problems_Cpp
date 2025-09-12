#include<iostream>
using namespace std;

int main()
{
	const int size = 10;
	int arr[size] = { 5, 10, 5, 20, 10, 30, 40, 20, 50, 30 };

	int skip_index[size];
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == skip_index[i])
			continue;

		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
				skip_index[j] = arr[j];
		}

		count++;
	}
	cout << "There are " << count << " Distinct element(s)" << endl;


	return 0;
}