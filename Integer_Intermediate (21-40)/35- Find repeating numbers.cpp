#include<iostream>
using namespace std;

int main()
{
	const int size = 6;
	int A[size] = { 10, 20, 10, 10, 30, 20 };

	bool visited_Index[size] = { false };
	bool found = false;

	cout << "Repeating element(s): ";
	for (int i = 0; i < size; i++)
	{
		if (visited_Index[i] == true)
			continue;

		found = false;
		
		for (int j = i + 1; j < size; j++)
		{
			if (A[i] == A[j])
			{
				found = true;
				visited_Index[j] = true;
			}
		}
		if (found)
			cout << A[i] << " ";
	}
	cout << endl;
	

	return 0;
}