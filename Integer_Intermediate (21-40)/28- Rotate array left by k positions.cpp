#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int A[size] = { 10, 20, 30, 40, 50 };
	int k = 2;

	for (int i = 0; i < k; i++)
	{
		int first = A[0];
		for (int j = 0; j < size - 1; j++)
		{
			A[j] = A[j + 1];
		}
		A[size - 1] = first;
	}

	cout << "Displaying the element(s): ";
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;


	return 0;
}