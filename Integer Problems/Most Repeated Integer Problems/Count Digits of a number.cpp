#include <iostream>
using namespace std;

int main()
{
	int num, count = 0;
	cout << "Enter a number: ";
	cin >> num;

	int original = num; 

	if (num == 0) 
	{
		count = 1;
	}
	else
	{
		while (num != 0)
		{
			count++;
			num = num / 10;   
		}
	}
	cout << "Total digits in " << original << " = " << count << endl;


	return 0;
}