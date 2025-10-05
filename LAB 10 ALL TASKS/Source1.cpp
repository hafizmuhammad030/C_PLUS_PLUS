#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    int matrix[3][3];

   
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cin >> matrix[i][j];
        }
    }

    
    cout << "Original Matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

   
    cout << "Matrix in Reverse Order:\n";
    for (int i = 3 - 1; i >= 0; i--) {
        for (int j = 3 - 1; j >= 0; j--) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}





