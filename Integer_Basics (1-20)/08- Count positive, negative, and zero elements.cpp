#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = { 0 };

	cout << "Enter the 5 elements for the array" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". ";
		cin >> arr[i];
	}

	int positive = 0, negative = 0, zeroCount = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
			zeroCount++;
		else if (arr[i] > 0)
			positive++;
		else
			negative++;
	}
	cout << "The count of zero is " << zeroCount << endl;
	cout << "The count of positive number is " << positive << endl;
	cout << "The count of negative number is " << negative << endl;


	return 0;
}