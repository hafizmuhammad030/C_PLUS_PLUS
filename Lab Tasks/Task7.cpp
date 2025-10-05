#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    char word[10] = {};
    ifstream fin;
    ofstream fout;
    fin.open("My data.txt");
    fout.open("converteddata.txt");
    fin >> word;


    for (int i = 0; i < 10; i++)
    {
        fin >> word[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (word[i] <= 122 || word[i] >= 97 && word[i] != ' ')
            word[i] = word[i] - 32;
        else if (word[i] <= 90 || word[i] >= 65 && word[i] != ' ')
            word[i] = word[i] + 32;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << word[i] << endl;
    }
    fout.close();
    fin.close();
    return 0;
}