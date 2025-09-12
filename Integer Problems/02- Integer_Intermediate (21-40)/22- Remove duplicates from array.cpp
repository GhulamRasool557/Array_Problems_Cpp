#include<iostream>
using namespace std;

int main()
{
	const int size = 10;
	int A[size] = { 10, 20, 30, 10, 40, 10, 20, 60, 30, 70 };
	int newSize = size;

	for (int i = 0; i < newSize; i++)
	{
		for (int j = i + 1; j < newSize; j++)
		{
			if (A[i] == A[j])
			{
				for (int k = j; k < newSize - 1; k++)
				{
					A[k] = A[k + 1];
				}
				newSize--;
				j--;
			}
		}
	}

	cout << "Displaying the Array: ";
	for (int i = 0; i < newSize; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;


	return 0;
}