#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int A[size] = { 10, 20, 30, 40, 50 };

	int last = A[size - 1];
	for (int i = size - 1; i > 0; i--)
	{
		A[i] = A[i - 1];
	}
	A[0] = last;

	cout << "Displaying the element(s): ";
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;


	return 0;
}