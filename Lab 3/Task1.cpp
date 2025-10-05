
#include <iostream>
#include <fstream>
using namespace std;

float FtoC(float F);
float CtoF(float C);

int main() 
{

    int op;
    float F, C;

    cout
        << "Choose Any Option: " << endl
        << "1. Fahrenheit to Celsius." << endl
        << "2. Celsius to Fahrenheit." << endl
        << "Enter Here: ";

    while (true)
    {
        cin >> op;

        if (op == 1 || op == 2) {
            break;
        }
        else
        {
            cout << "Invalid Input. Enter Again: ";
            continue;
        }
    }

    if (op == 1) {

        cout << "Enter Value in Fahrenheit: ";
        cin >> F;

        cout << "" << endl;
        cout << "Value in Celsius is: " << FtoC(F) << endl;
        cout << "" << endl;
    }
    else
    {
        cout << "Enter Value in Celsius: ";
        cin >> C;

        cout << "" << endl;
        cout << "Value in Fahrenheit is: " << CtoF(C) << endl;
        cout << "" << endl;
    }
}

float FtoC(float F) 
{
    float C;

    C = (F - 32) * 5 / 9;

    return C;
}

float CtoF(float C)
{
    float F;

    F = (C * 9 / 5) + 32;

    return F;
}
