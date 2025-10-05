
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream inputFile("TextFile1.txt");
	string word;
		string dictWord;

	bool foundWord = false;
	while (inputFile >> word)
	{
		ifstream dictionaryFile("Dictionary.txt");

		while (dictionaryFile >> dictWord)
		{
			if (word == dictWord)
			{
				foundWord = true;

				break;
			}
		}

		if (!foundWord)
		{
			cout << "Misspelled: " << word << endl;
		}

		dictionaryFile.close();

		foundWord = false;
	}

	inputFile.close();

	system("pause");
	return 0;
}