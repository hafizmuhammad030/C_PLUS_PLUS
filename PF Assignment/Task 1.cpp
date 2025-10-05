
#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    char name[100];
    int marks; 
    float CGPA;
};

int main()
{
    ofstream file("Student.txt", ios::app);
    char choice;
    do {
        cout << "Press capital'S' to add more  file records:" << endl;
        cout << "capital 'P' to print all records:" << endl;
        cout << "capital'G' to find the student with max CGPA:" << endl;
        cout << "capital'M' to print records with marks above 30:" << endl;
        cout << "capital 'E' to exit:" << endl;
        cin >> choice;

        if (choice == 'S')
        {
            for (int i = 0; i < 5; i++)
            {
                Student newStudent;
                cout << "Enter student name: ";
                cin >> newStudent.name;
                cout << "Enter marks: ";
                cin >> newStudent.marks;
                cout << "Enter CGPA: ";
                cin >> newStudent.CGPA;

                file << newStudent.name << " " << newStudent.marks << " " << newStudent.CGPA << endl;
            }
        }
        else if (choice == 'P')
        {
            ifstream readFile("Student.txt");
            Student student;

            while (readFile >> student.name >> student.marks >> student.CGPA)
            {
                cout << "Name: " << student.name << ", Marks: " << student.marks << ", CGPA: " << student.CGPA << endl;
            }

            readFile.close();
        }
        else if (choice == 'G')
        {
            ifstream readFile("Student.txt");
            Student student;
            Student studentMaxCGPA;
            float maxCGPA = 0;

            while (readFile >> student.name >> student.marks >> student.CGPA)
            {
                if (student.CGPA > maxCGPA)
                {
                    maxCGPA = student.CGPA;
                    studentMaxCGPA = student;
                }
            }

            cout << "Student with max CGPA: " << studentMaxCGPA.name << ", CGPA: " << studentMaxCGPA.CGPA << endl;

            readFile.close();
        }
        else if (choice == 'M')
        {
            ifstream readFile("Student.txt");
            Student student;

            while (readFile >> student.name >> student.marks >> student.CGPA)
            {
                if (student.marks > 30)
                {
                    cout << "Name: " << student.name << ", Marks: " << student.marks << ", CGPA: " << student.CGPA << endl;
                }
            }

            readFile.close();
        }

        cout << "Press 'Y' to continue or 'N' to terminate: ";// Your choice 
        cin >> choice;
    } while (choice == 'Y');

    file.close();

    
    return 0;
}
