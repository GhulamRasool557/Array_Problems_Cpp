#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int A[size] = { 1, 4, 2, 7, 5, 3 };
	int targetSum = 10;

	cout << "Triplet of elements: ";
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			for (int k = j + 1; k < size; k++)
			{
				if ((A[i] + A[j] + A[k]) == targetSum)
					cout << "(" << A[i] << ", " << A[j] << ", " << A[k] << ") ";
			}
		}
	}
	cout << endl;


	return 0;
}