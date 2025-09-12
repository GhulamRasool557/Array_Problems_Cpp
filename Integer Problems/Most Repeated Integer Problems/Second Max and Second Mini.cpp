#include<iostream>
using namespace std;

int main()
{
	const int size = 8;
	int arr[size] = { 15, 7, 22, 3, 9, 18, 27, 5 };

	int firstMax = arr[0], firstMin = arr[0];

	// 1st pass - find max and min
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > firstMax)
			firstMax = arr[i];
		if (arr[i] < firstMin)
			firstMin = arr[i];
	}

	int secondMax = firstMin, secondMin = firstMax;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > secondMax && arr[i] < firstMax)
			secondMax = arr[i];
		if (arr[i] < secondMin && arr[i] > firstMin)
			secondMin = arr[i];
	}
	cout << "Second Maximum: " << secondMax << endl;
	cout << "Second Minimum: " << secondMin << endl;


	return 0;
}