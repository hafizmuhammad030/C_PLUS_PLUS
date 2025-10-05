
#include <iostream>
#include <fstream>
using namespace std;

double sqroot(double num);
double power(double num);
double floor(double num);
double ceil(double num);
double perm(double n, double r);
double combi(double n, double r);
double fact(int n);

int main() {

    int op;


    cout
        << "Choose Any Option: " << endl
        << "1. Square Root" << endl
        << "2. Power" << endl
        << "3. Floor" << endl
        << "4. Ceil" << endl
        << "5. Permutation" << endl
        << "6. Combination" << endl
        << "Enter Here: ";

    while (1) {
        cin >> op;

        if (op == 1 || op == 2 || op == 3 || op == 4 || op == 5 || op == 6) {
            break;
        }
        else {
            cout << "Invalid Input. Enter Again: ";
            continue;
        }
    }

    if (op == 1) {
        double num;
        cout << "Enter the Number to find it's Square Root: ";
        cin >> num;
        cout << "*" << endl;
        cout << "Answer: " << sqroot(num) << endl;
        cout << "*" << endl;
    }
    else if (op == 2) {
        double num;
        cout << "Enter the Number to find it's Square: ";
        cin >> num;
        cout << "*" << endl;
        cout << "Answer: " << power(num) << endl;
        cout << "*" << endl;
    }
    else if (op == 3) {
        double num;
        cout << "Enter the Number to find it's floor: ";
        cin >> num;
        cout << "*" << endl;
        cout << "Answer: " << floor(num) << endl;
        cout << "*" << endl;
    }
    else if (op == 4) {
        double num;
        cout << "Enter the Number to find it's ceil: ";
        cin >> num;
        cout << "*" << endl;
        cout << "Answer: " << ceil(num) << endl;
        cout << "*" << endl;
    }
    else if (op == 5) {
        double num, num2;

        cout
            << "For Permutation: " << endl
            << "Enter the total Number of elements: ";
        cin >> num;
        cout << "Enter the Number of elements to choose: ";
        cin >> num2;
        cout << "*" << endl;
        cout << "Answer: " << perm(num, num2) << endl;
        cout << "*" << endl;
    }
    else if (op == 6) {
        double num, num2;

        cout
            << "For Combination: " << endl
            << "Enter the total Number of elements: ";
        cin >> num;
        cout << "Enter the Number of elements to choose: ";
        cin >> num2;
        cout << "*" << endl;
        cout << "Answer: " << combi(num, num2) << endl;
        cout << "*" << endl;
    }


    return 0;
}

double sqroot(double num) {
    return 0;
}
double power(double num) {
    double ans = num * num;
    return ans;
}
double floor(double num) {

    return int(num);
}
double ceil(double num) {
    int ans = int(num);
    if (ans == num) {
        return ans;
    }
    else {
        return ans + 1;
    }
}
double fact(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
double perm(double n, double r) {

    return fact(n) / fact(n - r);
}
double combi(double n, double r) {

    return fact(n) / (fact(r) * fact(n - r));
}
