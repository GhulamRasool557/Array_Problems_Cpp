#include <iostream>
using namespace std;

int main()
{
	const int n1 = 5;
	const int n2 = 4;

	int arr1[n1] = { 19, 14, 19, 18, 14 };
	int arr2[n2] = { 14, 19, 15, 14 };

	bool used[n2] = { false };

	cout << "Common numbers (unique): ";

	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			if (used[j])
				continue;

			if (arr1[i] == arr2[j])
			{
				used[j] = true;
				cout << arr2[j] << " ";
				break;
			}
		}
	}
	cout << endl;


	return 0;
}