#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    int matrix1[2][3], matrix2[2][3], sumMatrix[2][3];

    
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix1[i][j];
        }
    }

    
    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix2[i][j];
        }
    }

    
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j) 
        {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

   
    cout << "Sum Matrix of Two Matrix:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}