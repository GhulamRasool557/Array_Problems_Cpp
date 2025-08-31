#include<iostream>
using namespace std;

int main()
{
	const int size = 10;
	int A[size] = { 10, 20, 30, 40, 50, 30, 60, 30, 70, 20 };
	int element = 30;

	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (A[i] == element)
			count++;
	}

	int newSize = size;
	bool check = false;

	for (int i = 0; i < count; i++)
	{
		check = false;

		for (int j = 0; j < newSize; j++)
		{
			if (A[j] == element)
			{
				check = true;
				newSize--;
			}
			if (check)
				A[j] = A[j + 1];
		}
	}

	cout << "Displaying the array: ";
	for (int i = 0; i < newSize; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	

	return 0;
}