#include<iostream>
using namespace std;

int main()
{
	int A[5] = { 1, 2, 3, 4, 5 };
	int B[6] = { 3, 4, 5, 6, 7, 8 };
	int size1 = 5;
	int size2 = 6;

	cout << "Union of arrays: ";
	for (int i = 0; i < size1; i++)
	{
		cout << A[i] << " ";
	}
	for (int j = 0; j < size2; j++)
	{
		bool found = false;
		for (int i = 0; i < size1; i++)
		{
			if (B[j] == A[i])
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			cout << B[j] << " ";
		}
	}
	cout << endl;


	return 0;
}