#include <iostream>
using namespace std;

int main()
{
	int obtained = 0, total = 0;

	cout << "Enter obtained marks: ";
	cin >> obtained;

	cout << "Enter total marks: ";
	cin >> total;

	if (obtained < 0 || obtained > total || total <= 0)
	{
		cout << "Invalid input! Obtained marks should be between 0 and total." << endl;
	}
	else
	{
		float percentage = ((float)obtained / total) * 100;
		cout << "Percentage = " << percentage << "%" << endl;
	}


	return 0;
}