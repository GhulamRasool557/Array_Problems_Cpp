#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter how many terms: ";
	cin >> n;

	if (n <= 0)
	{
		cout << "Please enter a positive number!" << endl;
	}
	else if (n == 1)
	{
		cout << "Fibonacci Series: 0" << endl;
	}
	else
	{
		int a = 0, b = 1;
		cout << "Fibonacci Series: " << a << " " << b << " ";

		for (int i = 0; i < n - 2; i++)
		{
			int next = a + b;
			cout << next << " ";
			a = b;
			b = next;
		}
		cout << endl;
	}

	return 0;
}