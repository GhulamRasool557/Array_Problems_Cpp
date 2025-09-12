#include<iostream>
using namespace std;

int main()
{
	int A[6] = { 1, 2, 3, 4, 5, 6 };
	int B[5] = { 2, 3, 4, 7, 8 };
	int C[7] = { 0, 2, 3, 9, 10, 4, 11 };
	int size1 = 6, size2 = 5, size3 = 7;

	cout << "Common elements: ";
	for (int i = 0; i < size1; i++)
	{
		bool foundInB = false, foundInC = false;
		for (int j = 0; j < size2; j++)
		{
			if (A[i] == B[j])
			{
				foundInB = true;
				break;
			}
		}
		if (foundInB)
		{
			for (int k = 0; k < size3; k++)
			{
				if (A[i] == C[k])
				{
					foundInC = true;
					break;
				}
			}
		}
		if (foundInB && foundInC)
		{
			bool alreadyPrinted = false;
			for (int x = 0; x < i; x++)
			{
				if (A[x] == A[i])
				{
					alreadyPrinted = true;
					break;
				}
			}
			if (!alreadyPrinted)
			{
				cout << A[i] << " ";
			}
		}
	}
	cout << endl;


	return 0;
}