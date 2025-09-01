#include<iostream>
using namespace std;

int main()
{
	const int size = 8;
	int A[size] = { 3, -4, 2, -3, -1, 7, -5, 2 };

	int minSum = A[0];

	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		for (int j = i; j < size; j++)
		{
			sum += A[j];
			if (sum < minSum)
			{
				minSum = sum;
			}
		}
	}
	cout << "Minimum Subarray Sum = " << minSum << endl;


	return 0;
}