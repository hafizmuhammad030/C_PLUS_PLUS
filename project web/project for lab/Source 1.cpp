#include<iostream>
#include<string>
using namespace std;
int main()
{
    string roll_number, age, gender;
    string person_type, iban_no;
    int issued_book_index = -1;
    int available_copies[] = { 4, 4, 4, 4 };
    char continue_choice;
   
        cout << "    =======================================================\n\n";
        cout << "                  Welcome to my library\n\n";
        cout << "    =======================================================\n\n";
        cout << "Please! enter 'student' if you are a student or 'teacher' if you are a teacher:\n";
        cout << "\nEnter the person type:";
        cin >> person_type;
            if (person_type == "student")
            {
                cout << "\nEnter the roll no:";
                cin >> roll_number;
                cout << "\nEnter the age:";
                cin >> age;
                cout << "\nEnter the gender:";
                cin >> gender;
            }
            cout << "   \n========================================================\n\n";
            cout << "       we have the following books in the library:\n\n";
            cout << "   ========================================================\n\n";
            string book[] = { "Mr chips", "Bang e dara", "Why boys fail in college", "Intro to c++", "Urdu", "Maths" };
            string iban_number[] = { "10", "20", "30", "40", "50", "60" };
            string writer[] = { "Albert watson", "Allama iqbal", "James williams", "Strustrop", "Ghalib", "Darren gold" };
            string publish_date[] = { "01 jan 2003", "18 aug 2005", "25 jan 2000", "8 aug 2004", "23 jan 2004", "26 aug 2002", };
            string publisher[] = { "Phillips", "Albert", "James bond", "Shakespeare", "Saam john", "Pohn panti" };
            string cost[] = { "1000", "2000", "3000", "4000", "5000", "5500" };
            string copies[] = { "12", "32", "11", "45", "03", "09" };


            for (int i = 0; i < sizeof(book) / sizeof(book[0]); ++i)
            {
                cout << "\nBook " << i + 1 << " is: " << book[i];
                cout << "\nIban no. of book is: " << iban_number[i];
            }
        do
        {
            cout << "\n=================================================\n";


            cout << " Enter Iban no. for complete details of the book:    ";
            cin >> iban_no;
            cout << "=================================================\n\n";
            bool book_found = false;

            for (int i = 0; i < sizeof(iban_number) / sizeof(iban_number[0]); ++i)
            {
                if (iban_number[i] == iban_no)
                {
                    cout << "\nThe Name of the book is: " << book[i];
                    cout << "\nThe Author of the book is: " << writer[i];
                    cout << "\nThe Publisher of the book is: " << publisher[i];
                    cout << "\nThe Publishing year of the book is: " << publish_date[i];
                    cout << "\nThe Price of the book is: " << cost[i];
                    book_found = true;
                    issued_book_index = i;
                    break;
                }
            }
            int count = 0;

            if (!book_found)
            {
                cout << "\nBook not found. please enter a valid iban.\n\n";
            }
            else
            {
                char choice;
                cout << "\nWe have " << available_copies[issued_book_index] << " copies of this book in the library before issuing.";
                cout << "=================================================\n\n";
                cout << "enter 'y' if you want to issue a book or enter 'n' if you want to return a book:\n\n";
                cin >> choice;
                cout << "=================================================\n\n";
                while (choice == 'y')
                {
                    if (available_copies[issued_book_index] > 0)
                    {
                        cout << "Book issued successfully!\n\n";
                        count = available_copies[issued_book_index] - 1;
                        cout << "\nRemaining copies of the book is:\n\n " << count;

                        if (person_type == "student")
                        {
                            cout << "\nStudent details: " << endl;
                            cout << "\nRoll number of the student is: " << roll_number;
                            cout << "\nAge of the student is: " << age;
                            cout << "\nGender of the student is:\n " << gender;
                        }
                    }
                    else
                    {
                        cout << "\nNo available copies of the book to issue.\n\n";
                    }
                }
                while (choice == 'n')
                {
                    cout << "\nBook returned successfully!";
                    cout << "\nRemaining copies of the book:" << count << endl;
                }
            }
        }
        while (true);
        cout << "\nDo you want to continue as a different person? (y/n): ";
        cin >> continue_choice;
        cout << "=================================================\n\n";
        while (continue_choice == 'y');  

    return 0;
}