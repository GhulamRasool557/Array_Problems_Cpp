#include<iostream>
using namespace std;

int main()
{
	const int size = 20;
	int A[size] = {
		30, 20, 100, 40, 50,
		40, 50, 70, 50, 30,
		70, 20, 60, 200, 60,
		300, 50, 60, 40, 50
	};

	int freq[size] = { 0 };
	bool skip_Index[size] = { false };

	// Storing the frequency of each elements - At same index where the element is
	for (int i = 0; i < size; i++)
	{
		if (!skip_Index[i])
		{
			freq[i] = 1;
			for (int j = i + 1; j < size; j++)
			{
				if (A[i] == A[j])
				{
					freq[i]++;
					skip_Index[j] = true;
				}
			}
		}
		else
			freq[i] = 0;
	}

	int leastFreq = freq[0];
	for (int i = 1; i < size; i++)
	{
		if (freq[i] < leastFreq && freq[i] != 0)
		{
			leastFreq = freq[i];
		}
	}

	cout << "The least repeated element(s): ";
	for (int i = 0; i < size; i++)
	{
		if (freq[i] == leastFreq)
			cout << A[i] << " ";
	}
	cout << endl;
	cout << "With frequency: " << leastFreq << endl;


	return 0;
}