#include<iostream>
#include<string>
using namespace std;
int calculate_factorial(int n) {
	for (int i = 1; i < n; i++) {
		int factorial = 0;
		factorial *= i;
	}
	return n;
}
bool is_prime(int num) {
	for (int i = 1; i <= num; i++) {
		if (i % 2 != 0) {
			cout << i << ", ";
		}
	}
	return num;
	cout << endl;
}
int sum_of_digit(int num) {
	int sum = 0;
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

void isPalindrome(char arr[]) {
	int i = 0;
	while (arr[i] != '\0') {
		i++;
	}
	for (int j = 0; j < i / 2; j++) {
		if (arr[j] != arr[i - j - 1]) {
			cout << "The given string is not a palindrome." << endl;
			return;
		}
	}
	cout << "The given string is a palindrome." << endl;
}

int main()
{
	
	int insert_choice;

	do {
		cout << "\tMENU" << endl;
		cout << "press 1 to calculate factorial." << endl;
		cout << "prees 2 to check prime numbers." << endl;
		cout << "press 3 for sum of Digits." << endl;
		cout << "press 4 to Check Palindrome." << endl;
		cout << "press 5 to Exit." << endl;
		cout << "Enter your choice: ";
		cin >> insert_choice;
		
	

		if (insert_choice == 1) {
			int n;
			cout << "Enter a non-negative integer: ";
			cin >> n;
			cout << "Factorial of " << n << " is: " << calculate_factorial(n) << endl;
		}
		else if (insert_choice == 2) {
			int num;
			cout << "Enter an integer: ";
			cin >> num;
			if (is_prime(num)) {
				cout << num << " is a prime number." << endl;
			}
			else {
				cout << num << " is not a prime number." << endl;
			}
		}
		else if (insert_choice == 3) {
			int number;
			cout << "Enter an integer: ";
			cin >> number;
			cout << "Sum of digits of " << number << " is: " << sum_of_digit(number) << endl;
		}
		else if (insert_choice == 4)
		{
			char arr[50] = { '\0' };
			cout << "Enter a string to check if it's a palindrome: ";
			cin.getline(arr, 49);
			isPalindrome(arr);

		}
		else if (insert_choice == 5) {
			cout << "Exiting the program." << endl;
		}
		else {
			cout << "Invalid choice!!.Please enter a valid one." << endl;
		}
	} while (insert_choice != 5);

	system("pause");
	return 0;
}