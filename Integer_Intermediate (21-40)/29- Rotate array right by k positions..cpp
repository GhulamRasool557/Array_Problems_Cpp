#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int A[size] = { 10, 20, 30, 40, 50 };
	int k = 2;

	for (int i = 0; i < k; i++)
	{
		int last = A[size - 1];
		for (int j = size - 1; j > 0; j--)
		{
			A[j] = A[j - 1];
		}
		A[0] = last;
	}
	
	cout << "Displaying the element(s): ";
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;


	return 0;
}