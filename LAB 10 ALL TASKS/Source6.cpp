#include <iostream>
using namespace std;
int main() 
{
   
    string names[] = { "Ali", "Ahmad", "Bilal", "Rameel" };
    int size = sizeof(names) / sizeof(names[0]);

    cout << "List of Names:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << (i + 1)  << names[i] << endl;
    }

    int row1, row2;
    cout << "Enter the first row number to swap: ";
    cin >> row1;
    cout << "Enter the second row number to swap: ";
    cin >> row2;

    if (row1 < 1 || row1 > size || row2 < 1 || row2 > size)
    {
        cout << "Invalid row numbers!" << endl;
        return 1;
    }
    row1 -= 1;
    row2 -= 1;
    string temp = names[row1];
    names[row1] = names[row2];
    names[row2] = temp;

  
    cout << "Updated List of Names:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << (i + 1) << names[i] << endl;
    }

    return 0;
}