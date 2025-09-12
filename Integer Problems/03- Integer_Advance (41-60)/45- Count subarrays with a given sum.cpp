#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int A[size] = { 1, 2, 3, 2, 1, 4 };
	int target = 5;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		for (int j = i; j < size; j++)
		{
			sum += A[j];
			if (sum == target)
			{
				count++;
			}
		}
	}
	cout << "Count of subarrays with sum " << target << " = " << count << endl;


	return 0;
}