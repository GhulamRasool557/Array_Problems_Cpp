#include<iostream>
using namespace std;

int main()
{
	int arr[10] = { 8, 7, 20, 50, 90, 55, 12, 21, 77, 88 };

	float average = 0;
	for (int i = 0; i < 10; i++)
	{
		average += arr[i];
	}
	average /= 10;
	cout << "Average of number/s: " << average << endl;


	return 0;
}