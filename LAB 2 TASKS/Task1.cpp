#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   
    ifstream inputFile("data.txt");

   
    int totalCount;
    inputFile >> totalCount;

    int * entries = new int[totalCount];
    int * occurrences = new int[totalCount];


    for (int i = 0; i < totalCount; i++)
    {
        occurrences[i] = 0;
    }

    for (int i = 0; i < totalCount; i++)
    {
        inputFile >> entries[i];
    }

    for (int i = 0; i < totalCount; i++)
    {
        if (occurrences[i] == 0)
        {
            occurrences[i] = 1;
            for (int j = i + 1; j < totalCount; j++)
            {
                if (entries[i] == entries[j])
                {
                    occurrences[i]++;
                }
            }
        }
    }
    for (int i = 0; i < totalCount; i++)
    {
        cout << "Count of " << entries[i] << "\t" << occurrences[i] << endl;
    }

    delete[] entries;
    delete[] occurrences;

    inputFile.close();
    return 0;
}
