#include<iostream>
using namespace std;

int main()
{
	const int size = 10;
	int A[size] = { 9, 8, 7, 6, 5, 10, 8, 6, 4, 3 };

	int maxLen = 1, currentLen = 1;
	int startIndex = 0, bestStart = 0;

	for (int i = 1; i < size; i++)
	{
		if (A[i] < A[i - 1])
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

	cout << "Longest Decreasing Subarray Length = " << maxLen << endl;
	cout << "Subarray: ";
	for (int i = bestStart; i < bestStart + maxLen; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;


	return 0;
}