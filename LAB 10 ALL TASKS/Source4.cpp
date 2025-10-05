#include <iostream>
using namespace std;
int main() 
{
    int rows, cols;

    
    int matrix[2][3];

    
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

   
   
    cout << "Matrix column-wise:\n";
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 2; i++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}