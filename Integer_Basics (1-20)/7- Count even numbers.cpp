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

	int odd = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
			odd++;
	}
	cout << "Count of odd element/s is " << odd << endl;


	return 0;
}