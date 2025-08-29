#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int arr[size] = { 12, 35, 1, 10, 34, 1 };

	int minimum = arr[0];
	int secondminimum = -1;

	for (int i = 1; i < size; i++)
	{
		if (arr[i] < minimum)							
		{												
			secondminimum = minimum;					
 			minimum = arr[i];
		}
		else if (arr[i] < secondminimum && arr[i] != minimum)
		{
			secondminimum = arr[i];
		}
	}

	if (secondminimum == -1)
		cout << "No second minimum element in the array" << endl;
	else
		cout << "The second minimum element in the array is " << secondminimum << endl;


	return 0;
}