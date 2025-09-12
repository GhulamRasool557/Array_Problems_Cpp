#include<iostream>
using namespace std;

int main()
{
	const int size1 = 3; 
	const int size2 = 4;

	int A[size1] = { 5, 7, 10 };
	int B[size2] = { 1, 4, 9, 10 };

	int C[size1 + size2] = { 0 };
	int i = 0, j = 0, k = 0;
	
	while (i < size1 && j < size2)
	{
		if (A[i] < B[j])
		{
			C[k] = A[i];
			i++;
		}
		else
		{
			C[k] = B[j];
			j++;
		}
		k++;
	}
	while (i < size1) 
	{
		C[k] = A[i]; 
		i++;
		k++;
	}
	while (j < size2)
	{ 
		C[k] = B[j]; 
		j++; 
		k++; 
	}

	cout << "Merged Array: " << endl;
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << C[i] << " ";
	}
	cout << endl;

	
	return 0;
}