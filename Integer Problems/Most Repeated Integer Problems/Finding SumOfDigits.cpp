#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	cout << "Enter the number: ";
	cin >> num;

	int sum = 0;
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	cout << "Sum of the digits = " << sum << endl;


	return 0;
}