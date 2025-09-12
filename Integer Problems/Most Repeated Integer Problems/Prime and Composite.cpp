#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	if (num <= 1)
	{
		cout << num << " is neither Prime nor Composite." << endl;
	}
	else
	{
		bool isPrime = true;

		for (int i = 2; i <= num / 2; i++)  
		{
			if (num % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			cout << num << " is a Prime number." << endl;
		else
			cout << num << " is a Composite number." << endl;
	}


	return 0;
}