#include<iostream>
using namespace std;

int main()
{
	const int size = 7;
	int A[size] = { 2, 2, 1, 1, 2, 2, 2 };

	int candidate = A[0], count = 1;
	for (int i = 1; i < size; i++)
	{
		if (A[i] == candidate) 
			count++;
		else 
			count--;

		if (count == 0)
		{
			candidate = A[i];
			count = 1;
		}
	}
	count = 0;
	for (int i = 0; i < size; i++)
	{
		if (A[i] == candidate) 
			count++;
	}
	if (count > size / 2) 
		cout << "Majority Element = " << candidate << endl;
	else 
		cout << "No Majority Element" << endl;


	return 0;
}