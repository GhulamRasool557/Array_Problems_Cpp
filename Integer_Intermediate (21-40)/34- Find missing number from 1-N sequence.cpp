#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size - 1] = { 1, 2, 3, 5 };

	int total = size * (size + 1) / 2;
	int sum = 0;
	
	for (int i = 0; i < size - 1; i++)
	{
		sum += arr[i];
	}

	int missing = total - sum;
	cout << "Missing number is: " << missing << endl;


	return 0;
}