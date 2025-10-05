#include<iostream>
#include<fstream>
#include<cstring> // using cstring library for character array
using namespace std;
int main()
{
	// for reading
	ifstream fin("character.txt");
	char arr[50];
	while (!fin.eof())
	{
		fin.getline(arr, 50, ' ');
		cout << arr;
	}
	fin.close();

	
	return 0;
}