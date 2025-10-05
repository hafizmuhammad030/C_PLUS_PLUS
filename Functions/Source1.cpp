// To find the sum of Numbers

/*
#include <iostream>
#include <fstream>
using namespace std;
int add(int num1, int num2) 
{
	int sum = num1 + num2;
	return sum;

 }
int main()
{
	int a;
	cout << "Enter the value of a:" << endl;
	cin >> a;
	int b;
	cout << "Enter the value of b:" << endl;
	cin >> b;
	cout << add(a, b) << endl;

	return 0;
}*/


// To find the sum of Decimal Numbers

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//float sum(float a, float b)
//{
//	float sum = a + b;
//	return sum;
//}
//int main()
//{
//	float x;
//	cout << "Enter the value of x: ";
//	cin >> x;
//	float y;
//	cout << "Enter the value of y:";
//	cin >> y;
//	cout << "The sum of Two numbers are:" << sum(x,y) << endl;
//
//	return 0;
//
//
//
//}


// To find the square of Number

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int square(int num)
//{
//	int square = num * num;
//	return square;
//
//}
//
//int main()
//{
//	int a;
//	cout << "Enter the value of a:";
//	cin >> a;
//
//
//	cout << "The square of Number is:" << square(a) << endl;
//
//	return 0;
//
//}


// To find the Maximum number of array


//#include <iostream>
//#include <fstream>
//using namespace std;
//
//void  maximum(int num1, int num2, int num3)
//{
//	if (num1 > num2)
//	{
//		cout << "The maximum Number is:" << num1 << endl;
//	}
//	else if (num2 > num3)
//	{
//		cout << "The maximum Number is:" << num2 << endl;
//	}
//	else
//	{
//		cout << "The maximum Number is:" << num3 << endl;
//	}
//
//	
//}
//
//int main()
//{
//	int a;
//	cout << "Enter the value of a:";
//	cin >> a;
//	int b;
//	cout << "Enter the value of b:";
//	cin >> b;
//	int c;
//	cout << "Enter the value of c:";
//	cin >> c;
//
//	maximum(a, b, c);
//
//	return 0;
//}




// Swapping Function

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//
//	
//
//}
//
//int main()
//{
//	int num1;
//	cout << "Enter the value of num1:";
//	cin >> num1;
//	int num2;
//	cout << "Enter the value of num2:";
//	cin >> num2;
//	
//	cout << num1 << "," << num2 << endl;
//	 swap(num1, num2);
//	cout << num1 << "," << num2 << endl;
//
//
//
//	return 0;
//
//
//
//}




// Change Temp into Farenheit

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int farenheit(int num)
//{
//	int fr = (num * 9 / 5) + 32;
//	return fr;
//}
//int main()
//{
//
//	int num;
//	cout << "Enter the number:";
//	cin >> num;
//	int x = farenheit(num);
//	cout << "Change in temp " << farenheit(num) << endl;
//
//
//	return 0;
//
//
//
//}








//#include <iostream>
//using namespace std;
//void cstring(char str[]){
//		int length = 0;
//		while (str[length] != '\0' && length < 50)
//		{
//			length++;
//		}
//		int i = 0;
//		int j = length - 1;
//		while (i < j)
//		{
//			while (!isalpha(str[i]) && i < j)
//			{
//				i++;
//			}
//			while (!isalpha (str[j]) && i < j)
//			{
//				j--;
//			}
//			if (islower(str[i]) && isupper(str[j]))
//			{
//				char temp = str[i];
//				str[i] = str[j];
//				str[j] = temp;
//				i++;
//				j--;
//			}
//			else
//			{
//				i++;
//				j--;
//			}
//		}
//	}
//
//
//int main()
//{
//	char arr[50];
//	cout << "Enter an upper and lower case string:";
//	cin.getline(arr, 50);
//	cstring(arr);
//	//cout << "After sorting:" << arr << endl;
//
//
//
//	system("pause");
//	return 0;
//}