#include<iostream>
using namespace std;

int main()
{
	const int size = 20;
	int A[20] = { 
		30, 20, 10, 40, 50,
		40, 50, 70, 50, 30,
		70, 20, 60, 40, 60,
		40, 50, 60, 40, 50 };

	int freq[20] = { 0 };
	bool skip_Index[20] = { false };

	// Storing the frequency of each elements - At same index where the element is
	for (int i = 0; i < size; i++)
	{
		if (!skip_Index[i])
		{
			int count = 1;

			for (int j = i + 1; j < size; j++)
			{
				if (A[i] == A[j])
				{
					count++;
					skip_Index[j] = true;
				}
			}
			freq[i] = count;
		}
		else
			freq[i] = 0;
	}

	int maxFreq = 0;
	for (int i = 0; i < size; i++)
	{
		if (freq[i] > maxFreq)
			maxFreq = freq[i];
	}

	cout << "The most repeated element(s): ";
	for (int i = 0; i < size; i++)
	{
		if (freq[i] == maxFreq)
			cout << A[i] << " ";
	}
	cout << endl;
	cout << "With frequency: " << maxFreq << endl;


	return 0;
}