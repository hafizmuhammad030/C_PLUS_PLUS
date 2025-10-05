#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inputFile("calculator.txt");
    ofstream outputFile("answer.txt");

    char operation[50];
    while (inputFile>> operation)
    {
        int num1 = 0, num2 = 0, result = 0;
        char option;
        int i = 0;
        while (operation[i] >= '0' && operation[i] <= '9' || operation[i] == '-')
        {
            num1 = num1 * 10 + (operation[i] - '0');
            ++i;
        }
        option = operation[i];
        ++i;
        while (operation[i] >= '0' && operation[i] <= '9' || operation[i] == '-')
        {
            num2 = num2 * 10 + (operation[i] - '0');
            ++i;
        }
        result = num1 + num2 + result;
        outputFile << num1 << " " << operation << " " << num2 << " = " << result << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Operations performed and results written to answer.txt." << endl;
    return 0;
}
