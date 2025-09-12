#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	int original = num;
	int digits = 0;

	// count digits
	int temp = num;
	while (temp > 0)
	{
		digits++;
		temp = temp / 10;
	}

	int sum = 0;
	temp = num;

	// calculate sum of powers
	while (temp > 0)
	{
		int digit = temp % 10;

		int power = 1;
		for (int i = 0; i < digits; i++) 
		{
			power = power * digit;
		}

		sum = sum + power;
		temp = temp / 10;
	}

	if (sum == num)
		cout << num << " is an Armstrong number." << endl;
	else
		cout << num << " is not an Armstrong number." << endl;

	return 0;
}