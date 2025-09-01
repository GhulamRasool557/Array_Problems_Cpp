#include<iostream>
using namespace std;

int main()
{
	const int size = 9;
	int A[size] = { 1, 2, 2, 4, 5, 6, 1, 2, 3 };

	int maxLen = 1, currentLen = 1;
	int startIndex = 0, bestStart = 0;

	for (int i = 1; i < size; i++)
	{
		if (A[i] > A[i - 1])
		{
			currentLen++;
			if (currentLen > maxLen)
			{
				maxLen = currentLen;
				bestStart = startIndex;
			}
		}
		else
		{
			currentLen = 1;
			startIndex = i;
		}
	}

	cout << "Longest Increasing Subarray Length = " << maxLen << endl;
	cout << "Subarray: ";
	for (int i = bestStart; i < bestStart + maxLen; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;


	return 0;
}