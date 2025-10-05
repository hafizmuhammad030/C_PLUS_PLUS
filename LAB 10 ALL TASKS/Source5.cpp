#include <iostream>
using namespace std;
void Sorting(int arr[], int n) 
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int rows, cols;
    int matrix[2][3];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < 2; i++) 
    
    {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        Sorting(matrix[i], 3);
    }

   
    cout << "Updated Matrix:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}