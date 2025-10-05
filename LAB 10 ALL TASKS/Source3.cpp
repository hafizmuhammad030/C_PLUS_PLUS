#include <iostream>
using namespace std;
int main()
{
    int n;
    int matrix[3][3];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }

    
   
    cout << "Diagonal elements:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    return 0;
}