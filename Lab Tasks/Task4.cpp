#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//Finding sum and average and display on console

	ofstream obj1("integer.txt");
	ofstream obj2("integer.txt", ios::app);// for append
	ifstream fileinput("integer.txt");
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		int after_update;
		cout << "Enter the first number of the array: ";
		cin >> after_update;
		obj1 << after_update << ((i + 1 != 5) ? " " : "");
	}
	obj1.close();

	int i = 0;

	while (!fileinput.eof())//for reading one time 
	{
		int after_update;
		fileinput >> after_update;
		arr[i] = after_update;
		i++;
	}
	fileinput.close();

	int sum = 0;
	for (int k = 0; k < 5; k++)
	{
		sum = sum + arr[k];

	}
	int average = sum / 5;
	obj2 << "The sum is " << sum << endl;
	obj2 << "The average is " << average;
	obj2.close();


	return 0;
}