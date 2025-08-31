#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int A[size] = { 10, 20, 30, 40, 50 };
	int position = 6;

	int newSize = size;
	bool check = false;

	if (position <= 0 || position > size)
		cout << "The Position " << position << " is invalid" << endl;

	for (int i = 0; i < newSize; i++)
	{
		if (i + 1 == position)
		{
			check = true;
			newSize--;
		}
		if (check)
			A[i] = A[i + 1];
	}	

	cout << "Displaying the Array: ";
	for (int i = 0; i < newSize; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;


	return 0;
}