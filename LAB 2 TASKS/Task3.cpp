#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("student.txt");
	int id[50];
	char grade[50];
	float cgpa[50];
	int count = 0;
	int i = 0;
	while (!fin.eof())
	{
		fin >> id[i];
		fin >> grade[i];
		fin >> cgpa[i];
		cout << id[i] << " " << grade[i] << " " << cgpa[i] << " " << endl;
		count++;


		i++;
	}

	fin.close();
	return 0;
}