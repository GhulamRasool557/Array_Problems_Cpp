#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int arr[size] = { 12, 35, 1, 10, 34, 1 };

	int largest = arr[0];
	int secondLargest = -1;

	for (int i = 1; i < size; i++)
	{
		if (arr[i] > largest)							
		{												
			secondLargest = largest;					
 			largest = arr[i];
		}
		else if (arr[i] > secondLargest && arr[i] != largest)
		{
			secondLargest = arr[i];
		}
	}

	if (secondLargest == -1)
		cout << "No second Largest element in the array" << endl;
	else
		cout << "The second Largest element in the array is " << secondLargest << endl;


	return 0;
}