
#include <iostream>
#include <fstream>
using namespace std;

void num(char a);
void special(char a);
void alphabet(char a);
void upper(char a);
void lower(char a);

int main() {

    int op;
    char c;

    cout
        << "Choose Any Option: " << endl
        << "1. Number Case." << endl
        << "2. Special Character Case." << endl
        << "3. Alphabet Case." << endl
        << "4. Upper Case." << endl
        << "5. Lower Case." << endl
        << "Enter Here: ";
    while (1) {
        cin >> op;

        if (op == 1 || op == 2 || op == 3 || op == 4 || op == 5)
        {
            break;
        }
        else {
            cout << "Invalid Input. Enter Again: ";
            continue;
        }
    }

    cout << "Enter the Character: ";
    cin >> c;

    cout << "" << endl;
    if (op == 1) {
        num(c);
    }
    else if (op == 2) {
        special(c);
    }
    else if (op == 3) {
        alphabet(c);
    }
    else if (op == 4) {
        upper(c);
    }
    else if (op == 5) {
        lower(c);
    }
    cout << "" << endl;
    return 0;
}

void num(char a) {

    if (a >= '0' && a <= '9') {
        cout << "It IS a Number." << endl;
    }
    else
        cout << "It is NOT a Number." << endl;
}
void special(char a) {
    if ((a >= 0 && a <= 47) || (a >= 58 && a <= 68) || (a >= 91 && a <= 96) || (a >= 123 && a <= 127)) {
        cout << "It IS a Special Character." << endl;
    }
    else
        cout << "It is NOT a Special Character." << endl;
}
void alphabet(char a) {
    if ((a >= 'a' && a <= 'z') || (a <= 'A' >= 'Z')) {
        cout << "It IS a Alphabet." << endl;
    }
    else
        cout << "It is NOT a Alphabet." << endl;
}
void upper(char a) {
    if (a >= 'A' && a <= 'Z') {
        cout << "It IS an Upper Case letter." << endl;
    }
    else
        cout << "It is NOT a Upper Case letter." << endl;
}
void lower(char a) {
    if (a >= 'a' && a <= 'z') {
        cout << "It IS an Lower Case letter." << endl;
    }
    else
        cout << "It is NOT a Lower Case letter." << endl;
}
