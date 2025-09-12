#include<iostream>
using namespace std;

int main()
{
	const int size = 7;
	int A[size] = { 1, 3, 20, 4, 1, 0, 5 };

	for (int i = 0; i < size; i++)
	{
		if ((i == 0 || A[i] > A[i - 1]) && (i == size - 1 || A[i] > A[i + 1]))
		{
			cout << "Peak Element = " << A[i] << endl;
			break;
		}
	}


	return 0;
}