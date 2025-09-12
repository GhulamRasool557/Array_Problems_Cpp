#include<iostream>
using namespace std;

void input(int *ptr, int size);
void shrink(int *&ptr, int &size);
void output(int *ptr, int size);

int main()
{
	cout << "Task 02" << endl;
	cout << "Deleting the Number" << endl << endl;

	int size = 0;
	cout << "Enter the size: ";
	cin >> size;
	int *ptr = new int[size];

	input(ptr, size);
	shrink(ptr, size);
	output(ptr, size);


	return 0;
}
void input(int *ptr, int size)
{
	cout << "Enter the " << size << " element: ";
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
}
void shrink(int *&ptr, int &size)
{
	int del = 0;
	cout << "Enter the number to delete: ";
	cin >> del;

	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] == del)
		{
			count++;
		}
	}

	int *temp = new int[size - count];

	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] == del)
			continue;

		temp[index] = ptr[i];
		index++;
	}

	delete[] ptr;
	ptr = temp;
	temp = NULL;

	size -= count;
}
void output(int *ptr, int size)
{
	cout << "Output: ";
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << " ";
	}
	cout << endl;
}