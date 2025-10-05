#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	// for updation

	ifstream fin("marks.txt");
	ofstream fout("updatemarks.txt");
	while (!fin.eof())
	{
		int update;
		fin >> update;
		update = update + 5;
		fout << update << " ";
	}
	cout << endl << "your marks have been updated" << endl;
	fin.close();
	fout.close();

	return 0;
}