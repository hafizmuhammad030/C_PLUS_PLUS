#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
	// Mission and vision
	ifstream infile("University Data.txt");
	if (!infile.is_open())
	{
		cout << "Error: Unable to open file University Data.txt" << endl;
		return 1;
	}


	string line;
	string vision;
		string mission;

	while (getline(infile, line)) 
	{
		if (line.find("Vision:") != string::npos)
		{
			while (getline(infile, line) && line.find("Mission:") == string::npos) {
				vision = vision + line + "\n";
			}
		}
		if (line.find("Mission:") != string::npos)
		{
			while (getline(infile, line) && line.find("Vision:") == string::npos) {
				mission += line + "\n";
			}
		}
	}

	infile.close();

	cout << "Vision of Ucp:\n" << vision << endl;
	cout << "Mission of Ucp:\n" << mission << endl;

	system("pause");
}