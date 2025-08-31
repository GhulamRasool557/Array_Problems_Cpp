#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int A[size] = { 2, 7, 4, 1, 6, 3 };
	int targetSum = 9;

	cout << "Pair of elements: ";
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if ((A[i] + A[j]) == targetSum)
				cout << "(" << A[i] << ", " << A[j] << ") ";
		}
	}
	cout << endl;


	return 0;
}