#include<iostream>
using namespace std;

int main()
{
	const int size = 7;
	int arr[size] = { 0, 1, 0, 1, 1, 0, 0 };

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
			arr[i] = -1;
	}

	int maxLen = 0; 

	for (int start = 0; start < size; start++)
	{
		int sum = 0;
		for (int end = start; end < size; end++)
		{
			sum += arr[end];

			if (sum == 0)
			{
				int len = end - start + 1;
				if (len > maxLen)
					maxLen = len;
			}
		}
	}
	cout << "Length of longest subarray with equal 0s and 1s: " << maxLen << endl;


	return 0;
}