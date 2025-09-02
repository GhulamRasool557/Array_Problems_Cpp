#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int A[size] = { 16, 17, 4, 3, 5, 2 };

	cout << "Leader Elements: ";
	for (int i = 0; i < size; i++)
	{
		bool leader = true;
		for (int j = i + 1; j < size; j++)
		{
			if (A[j] > A[i])
			{
				leader = false;
				break;
			}
		}
		if (leader) cout << A[i] << " ";
	}
	cout << endl;


	return 0;
}