#include<iostream>
using namespace std;

int main()
{
	const int rows = 3;
	const int cols = 3;
	int arr[rows][cols] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	int top = 0, bottom = rows - 1;
	int left = 0, right = cols - 1;

	cout << "Spiral order: ";

	while (top <= bottom && left <= right)
	{
		// Step 1: left to right
		for (int i = left; i <= right; i++)
			cout << arr[top][i] << " ";
		top++;

		// Step 2: top to bottom
		for (int i = top; i <= bottom; i++)
			cout << arr[i][right] << " ";
		right--;

		// Step 3: right to left (if rows left)
		if (top <= bottom)
		{
			for (int i = right; i >= left; i--)
				cout << arr[bottom][i] << " ";
			bottom--;
		}

		// Step 4: bottom to top (if cols left)
		if (left <= right)
		{
			for (int i = bottom; i >= top; i--)
				cout << arr[i][left] << " ";
			left++;
		}
	}
	cout << endl;


	return 0;
}