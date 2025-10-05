#include <iostream>
#include <fstream>
using namespace std;

const int rows = 13;
const int seatsPerRow = 6;
char seatPlan[rows][seatsPerRow];

void initializeSeats()
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < seatsPerRow; j++)
        {
            seatPlan[i][j] = '*';
        }
    }
}

void displaySeatPlan()
{
    cout << "\n\t\t\t\t( Current Seating Plan )" << endl;
    cout << endl;
    cout << "         A    B    C    D    E    F" << endl;

    for (int i = 0; i < rows; i++) 
    {
        cout << "Row " << i + 1;
        for (int j = 0; j < seatsPerRow; j++) 
        {
            cout << "    " << seatPlan[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void assignSeat()
{
    int row;
    char seat;
    string ticketType;

    cout << "\nEnter ticket type (first, business, economy): ";
    cin >> ticketType;

    cout << "Enter desired seat (e.g., 1A, 2F, 13C): ";
    cin >> row >> seat;

    if (row < 1 || row > rows || seat < 'A' || seat > 'F') {
        cout << "Invalid seat choice." << endl;
        return;
    }

    int seatIndex = seat - 'A';
    if (seatPlan[row - 1][seatIndex] == '*') {
        seatPlan[row - 1][seatIndex] = 'X';
        cout << "Seat " << row << seat << " (" << ticketType << " class) assigned." << endl;
    }
    else
    {
        cout << "Seat " << row << seat << " is already occupied." << endl;
    }
}

void saveSeatPlanToFile()
{
    ofstream fout("seats.txt");

    
    fout << "         A    B    C    D    E    F" << endl;

    for (int i = 0; i < rows; i++) {
        fout << "Row " << (i + 1);
        for (int j = 0; j < seatsPerRow; j++) {
            fout << "    " << seatPlan[i][j];
        }
        fout << endl;
    }

    fout.close();
}


int main()
{
    initializeSeats();
    int choice;
    do {
        cout << "\n===== AIRPLANE SEATING SYSTEM =====" << endl;
        cout << "1. Display seating plan" << endl;
        cout << "2. Assign a seat" << endl;
        cout << "3. Save seating plan to file" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            displaySeatPlan();
            break;
        case 2:
            assignSeat();
            break;
        case 3:
            saveSeatPlanToFile();
            cout << "Seat plan has been saved to file 'seats.txt'." << endl;
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter again." << endl;
            break;
        }

    } while (choice != 4);

    return 0;
}
