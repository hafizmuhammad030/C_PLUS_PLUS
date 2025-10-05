#include <iostream>
#include <fstream>
using namespace std;

void display_array(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
} 

// Sorting of Array
void sorting(int * arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
				

				
		}
	}
}

void insert_value(int *& arr, int& size, int value)
{
	int * newArr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}

	newArr[size] = value;
	size++;
	delete[] arr;
	arr = newArr;

	sorting(arr, size);

}


bool deleteValue(int *& arr, int& size, int value)
{
	int i = 0;
	while (i < size && arr[i] != value)
	{
		i++;
	}
	if (i == size)
	{
		return false;
	}
	int * newArr = new int[size - 1];
	for (int j = 0; j < i; j++)
	{
		newArr[j] = arr[j];

	}
	for (int j = i + 1; j < size; j++)
	{
		newArr[j - 1] = arr[j];
	}
	size--;

	delete[] arr;

	arr = newArr;

	return true;


}
int main()
{
	int size = 0;
	int num = 10;

	int * arr = new int[num];

	ifstream fin("Input.txt");
	while (fin >> arr[size])
	{
		size++;
		if (size >= num)
		{
			num = num * 2;
			int* temp = new int[num];
			for (int i = 0; i < size; i++)
			{
				temp[i] = arr[i];
			}
			delete[] arr;
			arr = temp;
		}
	}
	fin.close();
	sorting(arr, size);
	cout << "Original array: ";
	display_array(arr, size);

	char Choice;
	do {
		int choice;
		cout << "Enter your choice: \n1. Insert a new value in a sorted place\n2. Delete a specific value\n";
		cin >> choice;

		if (choice == 1) {
			int value;
			cout << "Enter a value that you wants to add into array: ";
			cin >> value;
			insert_value(arr, size, value);
			cout << "After add array: ";
			display_array(arr, size);
		}
		else if (choice == 2) {
			int value;
			cout << "Enter a value that you wants to be deleted: ";
			cin >> value;
			if (deleteValue(arr, size, value)) {
				cout << "After deletion, array: ";
				display_array(arr, size);
			}
			else {
				cout << "Value not found." << endl;
			}
		}
		else {
			cout << "Invalid choice." << endl;
		}

		cout << "Do you want to continue (Y/N): ";
		cin >> Choice;
	} while (Choice == 'Y' ||Choice == 'y');

	
	delete[] arr;

	return 0;
}
