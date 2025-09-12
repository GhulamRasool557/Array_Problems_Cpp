#include<iostream>
using namespace std;

int main()
{
	const int size = 10;
	int A[size] = { 10, 20, 30, 40, 50, 30, 60, 30, 70, 20 };
	int before = 30;
	int after = 100;

	bool found = false;

	for (int i = 0; i < size; i++)
	{
		if (A[i] == before)
		{
			A[i] = after;
			found = true;
		}
	}

	if (!found)
		cout << "Error, The Element " << before << " not found" << endl;

	cout << "Displaying the array: ";
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	

	return 0;
}