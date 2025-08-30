#include<iostream>
using namespace std;

void insertElement(int A[], int size, int element, int position);

int main()
{
	const int size = 5;
	int A[size] = { 10, 20, 30, 40, 50 };
	int element = 100;
	int position = 3;
	
	if (position > size + 1 || position <= 0)
	{
		cout << "Error, the position " << position << " is invalid" << endl;
		return 0;
	}

	int B[size + 1] = { 0 };

	B[position - 1] = element;
	for (int i = 0; i < size; i++)
	{
		if (i >= position - 1)
		{
			B[i + 1] = A[i];
			continue;
		}
		B[i] = A[i];
	}

	cout << "Displaying Array: ";
	for (int i = 0; i < size + 1; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;


	return 0;
}
