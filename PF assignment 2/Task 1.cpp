#include<iostream>
#include<fstream>
using namespace std;
void initialize_array(int arr[], int size) {
	cout << "Enter the " << size << " integers: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
int find_max_value(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
void print_even_number(int arr[], int size) {
	cout << "Even numbers in the array elements are:";
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;
}
void display_array(int arr[], int size) {
	cout << "Array elements are:";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int size;
	cout << "Enter the size of array:";
	cin >> size;
	if (size < 0) {
		cout << "Invalid size!!!.Enet a positive number:" << endl;
	}
	int* array = new int[size];
	initialize_array(array, size);
	ofstream fout;
	fout.open("file.txt");
	if (!fout.is_open()) {
		cout << "Error in opening file." << endl;
		return 0;
	}
	int max_val = find_max_value(array, size);
	cout << "Maximum value in an array is:" << max_val << endl;
	fout << "Maximum value in an array is:" << max_val << endl;
	print_even_number(array, size);
	display_array(array, size);
	fout.close();
	cout << "Data successfully stored in file." << endl;

	system("pause");
	return 0;
}
