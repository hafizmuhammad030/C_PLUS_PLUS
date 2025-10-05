#include <iostream>
#include <fstream>
using namespace std;

void rowWiseSum(float** number, int rows, int* columnSize) {
    cout << "Sum row wise: ";
    for (int i = 0; i < rows; ++i) {
        float sum = 0;
        for (int j = 0; j < columnSize[i]; ++j) {
            sum = sum + number[i][j];
        }
        cout << sum;
        if (i < rows - 1) cout << ", ";
    }
    cout << endl;
}

void colWiseSum(float** number, int rows, int maxCols, int* columnSize) {
    cout << "Sum col wise: ";
    for (int j = 0; j < maxCols; ++j) {
        float sum = 0;
        for (int i = 0; i < rows; ++i) {
            if (j < columnSize[i]) {
                sum = sum + number[i][j];
            }
        }
        cout << sum;
        if (j < maxCols - 1) cout << ", ";
    }
    cout << endl;
}

void diagonalSum(float** number, int rows, int* columnSize) {
    bool isPossible = true;
    for (int i = 0; i < rows; ++i) {
        if (columnSize[i] <= i) {
            isPossible = false;
            break;
        }
    }

    if (!isPossible) {
        cout << "Sum diagonal wise: Not Possible" << endl;
    }
    else {
        float sum = 0;
        for (int i = 0; i < rows; ++i) {
            sum += number[i][i];
        }
        cout << "Sum diagonal wise: " << sum << endl;
    }
}

void reverseDiagonalSum(float** number, int rows, int* colSizes) {
    bool isPossible = true;
    for (int i = 0; i < rows; ++i) {
        if (colSizes[i] <= (rows - i - 1)) {
            isPossible = false;
            break;
        }
    }

    if (!isPossible) {
        cout << "Sum reverse diagonal: Not Possible" << endl;
    }
    else {
        float sum = 0;
        for (int i = 0; i < rows; ++i) {
            sum += number[i][rows - i - 1];
        }
        cout << "Sum reverse diagonal: " << sum << endl;
    }
}

int main()
{
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    ifstream infile(filename);

    int rows;
    infile >> rows;

    float** matrix = new float* [rows];
    int* columnSize = new int[rows];

    int maxCols = 0;
    for (int i = 0; i < rows; ++i) {
        infile >> columnSize[i];
        if (columnSize[i] > maxCols) {
            maxCols = columnSize[i];
        }

        matrix[i] = new float[columnSize[i]];
        for (int j = 0; j < columnSize[i]; ++j) {
            infile >> matrix[i][j];
        }
    }

    infile.close();

    rowWiseSum(matrix, rows, columnSize);
    colWiseSum(matrix, rows, maxCols, columnSize);
    diagonalSum(matrix, rows, columnSize);
    reverseDiagonalSum(matrix, rows, columnSize);

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] columnSize;

    return 0;
}