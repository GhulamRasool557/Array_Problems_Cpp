#include<iostream>
using namespace std;

int main()
{
	const int size = 12;
	int A[size] = { 5, 8, 5, 1, 9, 1, 7, 8, 1, 5, 7, 1 };

	int index_Skip[size] = { 0 };
	int frequency = 0;

	for (int i = 0; i < size; i++)
	{
		frequency = 0;
		if (index_Skip[i] == -1)
			continue;
		for (int j = i; j < size; j++)
		{
			if (A[i] == A[j])
			{
				index_Skip[j] = -1;
				frequency++;
			}
		}
		cout << "The element " << A[i] << " has frequency of " << frequency << endl;
	}


	return 0;
}