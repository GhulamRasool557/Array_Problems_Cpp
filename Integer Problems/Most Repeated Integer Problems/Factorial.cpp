#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;

	if (n < 0)
	{
		cout << "Factorial does not exist for negative numbers!" << endl;
	}
	else
	{
		long long fact = 1;  
		for (int i = 1; i <= n; i++)
		{
			fact = fact * i;
		}
		cout << "Factorial of " << n << " is " << fact << endl;
	}


	return 0;
}