#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int A[size] = { 2, 3, -1, 8, 4 };

	for (int i = 0; i < size; i++)
	{
		int leftSum = 0, rightSum = 0;
		for (int j = 0; j < i; j++)
		{
			leftSum += A[j];
		}
		for (int j = i + 1; j < size; j++)
		{
			rightSum += A[j];
		}
		if (leftSum == rightSum)
		{
			cout << "Equilibrium Index = " << i << endl;
			return 0;
		}
	}
	cout << "No Equilibrium Index found" << endl;


	return 0;
}