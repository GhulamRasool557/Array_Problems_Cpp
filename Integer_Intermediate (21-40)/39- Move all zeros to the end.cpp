#include<iostream>
using namespace std;

int main()
{
	const int size = 10;
	int A[size] = { 1, 0, -5, 0, 3, -15, 0, 5, 6, -20 };

	int B[size];
	int j = 0;

	// Copying negative elements
	for (int i = 0; i < size; i++)
	{
		if (A[i] != 0)
			B[j++] = A[i];
	}

	// Copying positive elements
	for (int i = 0; i < size; i++)
	{
		if (A[i] == 0)
			B[j++] = A[i];
	}

	cout << "Displaying the Array: ";
	for (int i = 0; i < size; i++)
		cout << B[i] << " ";
	cout << endl;


	return 0;
}