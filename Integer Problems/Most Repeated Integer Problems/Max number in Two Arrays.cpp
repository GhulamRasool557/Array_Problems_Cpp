#include <iostream>
using namespace std;

int main()
{
	const int n1 = 5;
	const int n2 = 4;

	int arr1[n1] = { 10, 25, 7, 3, 15 };   
	int arr2[n2] = { 5, 40, 8, 12 };       

	int maxNum = arr1[0]; 

	// check array 1
	for (int i = 0; i < n1; i++)
	{
		if (arr1[i] > maxNum)
			maxNum = arr1[i];
	}

	// check array 2
	for (int i = 0; i < n2; i++)
	{
		if (arr2[i] > maxNum)
			maxNum = arr2[i];
	}
	cout << "Maximum number among both arrays = " << maxNum << endl;
	

	return 0;
}