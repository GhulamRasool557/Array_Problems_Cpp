#include<iostream>
using namespace std;

int main()
{
	int A[5] = { 1, 2, 3, 4, 5 };
	int B[6] = { 3, 4, 5, 6, 7, 8 };
	int size1 = 5;
	int size2 = 6;

	cout << "Intersection of arrays: ";
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (A[i] == B[j])
			{
				bool alreadyPrinted = false;
				for (int k = 0; k < i; k++)
				{
					if (A[k] == A[i])
					{
						alreadyPrinted = true;
						break;
					}
				}
				if (!alreadyPrinted)
				{
					cout << A[i] << " ";
				}
				break;
			}
		}
	}
	cout << endl;


	return 0;
}