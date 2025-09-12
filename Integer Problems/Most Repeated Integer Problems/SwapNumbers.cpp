#include<iostream>
using namespace std;

int main()
{
	int num1 = 0, num2 = 0;

	cout << "Enter the Number One: ";
	cin >> num1; 
	cout << "Enter the Number Two: ";
	cin >> num2;

	// Swapping 
	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "Number One: " << num1 << endl;
	cout << "Number Two: " << num2 << endl;


	return 0;
}