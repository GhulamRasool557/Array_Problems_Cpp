#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int arr[size] = { 12, 35, 1, 10, 34, 1 };
	
	int maximum = arr[0];
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (arr[i] > maximum)
		{
			maximum = arr[i];
			index = i;
		}
	}

	cout << "Maximum element is at index " << index << " with value " << maximum << endl;


	return 0;
}