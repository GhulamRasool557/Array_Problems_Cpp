#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int A[size] = { 10, 20, 30, 40, 50 };

	int first = A[0];
	for (int i = 0; i < size - 1; i++)
	{
		A[i] = A[i + 1];
	}
	A[size - 1] = first;

	cout << "Displaying the element(s): ";
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;


	return 0;
}