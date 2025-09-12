#include <iostream>
using namespace std;

int main()
{
	int marks;

	while (true)  
	{
		cout << "Enter marks (0 - 100): ";
		cin >> marks;

		if (marks < 0 || marks > 100)
			cout << "Invalid! Marks must be between 0 and 100. Try again." << endl;
		else
			break; 
	}

	cout << "You entered: " << marks << endl;

	return 0;
}