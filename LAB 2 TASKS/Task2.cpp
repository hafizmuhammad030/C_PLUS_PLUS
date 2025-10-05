#include <iostream>
#include <fstream>

using namespace std;

const int max_enteries = 100;

int main()
{
    ifstream inputFile("data.txt");

 

    int total_Count;
    inputFile >> total_Count;

    int entries[max_enteries];
    int entryCounts[max_enteries] = { 0 };
    int entryPos[max_enteries][max_enteries];
    for (int i = 0; i < total_Count; i++)
    {
        for (int j = 0; j < max_enteries; j++)
        {
            entryPos[i][j] = 0;
        }
    }
    for (int i= 1; i <= total_Count; i++)
    {
        inputFile >> entries[i - 1];
        int entry = entries[i - 1];
        entryCounts[entry - 1]++;
        entryPos[entry - 1][entryCounts[entry - 1] - 1] = i;
    }


    for (int i = 0; i < max_enteries; i++)
    {
        if (entryCounts[i] > 0)
        {
            cout <<  (i + 1)  ;
            for (int j = 0; j < entryCounts[i]; j++)
            {
                cout << entryPos[i][j];
                if (j < entryCounts[i] - 1)
                {
                    cout << ",";
                }
            }
            cout << endl;
        }
    }

    inputFile.close();
    return 0;
}