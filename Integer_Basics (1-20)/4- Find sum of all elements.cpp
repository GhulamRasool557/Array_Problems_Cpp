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

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << "The sum of all the elements is " << sum << endl;


	return 0;
}