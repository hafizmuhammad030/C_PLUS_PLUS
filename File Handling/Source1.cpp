#include <iostream>
#include <fstream>

using namespace std;


int mostOccurringElement(int arr[], int size) {
    int mostOccurring = arr[0];
    int maxCount = 1;

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            mostOccurring = arr[i];
        }
    }

    return mostOccurring;
}

int main()
{
    ifstream inFile("Integer Data.txt");



 int integers[1000];
int num;
int count = 0;


while (inFile >> num )
{
    integers[count++] = num;
}

inFile.close();


int mostOccurring = mostOccurringElement(integers, count);


cout << "Most occurring element in the array is: " << mostOccurring << "." << endl;

return 0;
}