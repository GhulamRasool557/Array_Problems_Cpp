#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int arr[size] = { 12, 35, 1, 10, 34, 1 };
	bool check = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1])
			check = 1;
		else
		{
			check = 0;
			break;
		}
	}

	if (check)
		cout << "Yes, Array is sorted in descending order" << endl;
	else
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (arr[i] < arr[i + 1])
				check = 1;
			else
			{
				check = 0;
				break;
			}
		}
	}

	if (check)
		cout << "Yes, Array is sorted in ascending order" << endl;
	else 
		cout << "Array is not sorted" << endl;


	return 0;
}