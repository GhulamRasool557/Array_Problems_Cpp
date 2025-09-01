#include<iostream>
using namespace std;

int main()
{
	const int size = 9;
	int A[size] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	int maxSum = A[0];

	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		for (int j = i; j < size; j++)
		{
			sum += A[j];
			if (sum > maxSum)
			{
				maxSum = sum;
			}
		}
	}
	cout << "Maximum Subarray Sum = " << maxSum << endl;


	return 0;
}