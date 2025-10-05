#include <iostream>
using namespace std;


// Globally initialized variables
const int rows = 3;
const int cols = 3;

int main()
{
    int matrix[rows][cols];

    // Input the elements of the matrix
    cout << "Enter the elements of the " << rows << "x" << cols << " matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Sums row-wise:" << endl;
    for (int i = 0; i < rows; ++i) {
        int sumRow = 0;
        for (int j = 0; j < cols; ++j) {
            sumRow += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << sumRow << endl;
    }
    cout << "Sums column-wise:" << endl;
    for (int j = 0; j < cols; ++j) {
        int sumCol = 0;
        for (int i = 0; i < rows; ++i) {
            sumCol += matrix[i][j];
        }
        cout << "Column " << j + 1 << ": " << sumCol << endl;
    }

    return 0;
}