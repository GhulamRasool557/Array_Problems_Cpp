#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int arr[size] = { 50, 30, 100, 20, 70, 40 };
	int minimum = arr[0];
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (arr[i] < minimum)
		{
			minimum = arr[i];
			index = i;
		}
	}
	cout << "The minimum element is " << minimum << " at index " << index << endl;


	return 0;
}