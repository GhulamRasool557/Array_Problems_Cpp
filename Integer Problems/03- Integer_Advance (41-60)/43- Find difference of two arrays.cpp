#include<iostream>
using namespace std;

int main()
{
	int A[6] = { 1, 2, 3, 4, 5, 6 };
	int B[5] = { 4, 5, 6, 7, 8 };
	int size1 = 6;
	int size2 = 5;

	cout << "Difference (A - B): ";
	for (int i = 0; i < size1; i++)
	{
		bool found = false;
		for (int j = 0; j < size2; j++)
		{
			if (A[i] == B[j])
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			cout << A[i] << " ";
		}
	}
	cout << endl;


	return 0;
}