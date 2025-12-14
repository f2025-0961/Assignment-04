#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int menu();
void displaySeats(int seats[10][10]);
void reserveSeat(int seats[10][10], vector<int> &reservedRecord);
void cancelSeat(int seats[10][10], vector<int> &reservedRecord);
void count(int seats[10][10], vector<int> &reservedRecord, vector<int> &emptyRows);

int main()
{
    system("cls");
    int seats[10][10] = {0};
    vector<int> reservedRecord;
    vector<int> emptyRows;
    bool run = true;
    do
    {
        int choice = menu();
        switch (choice)
        {
        case 1:
            displaySeats(seats);
            break;
        case 2:
            reserveSeat(seats, reservedRecord);
            break;
        case 3:
            cancelSeat(seats, reservedRecord);
            break;
        case 4:
            count(seats, reservedRecord, emptyRows);
            break;
        case 5:
            run = false;
            break;

        default:
            cout << "Invalid input!\n";
            break;
        }
    } while (run);

    return 0;
}

int menu()
{
    int choice;
    cout << "\n\t\t---Menue---\n1.Display Seats\n2.Reserve a seat\n3.Cancel a seat\n4.Count fully occupied & partially occupied seats , and empty rows\n5.Exit\n";
    cin >> choice;
    return choice;
}

void displaySeats(int seats[10][10])
{
    int status = 0;
    int seatNo = 1;
    cout << "\t\t\t\t\t\t ===========All Seats===========\n\n";
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << (seatNo < 10 && seatNo > 0 ? "S.No:0" : "S.No:") << seatNo << "(" << seats[i][j] << (j + 1 == 5 ? ")\t\t" : ")  ");
            seatNo++;
        }
        cout << endl;
    }
}

void reserveSeat(int seat[10][10], vector<int> &reservedRecord)
{
    int reserve;
    cout << "Enter Seat No to reserve: \n";
    cin >> reserve;
    if (reserve > 100 || reserve < 1)
    {
        cout << "Invalid input!\n";
        return;
    }
    for (int vec : reservedRecord)
    {
        if (vec == reserve)
        {
            cout << "This seat is already reserved! Kindly choose any other.\n";
            return;
        }
    }

    reservedRecord.push_back(reserve);
    int row, column;
    row = (reserve - 1) / 10;
    column = (reserve - 1) % 10;
    seat[row][column] = 1;
    cout << "Seat is reserved successfully!" << endl;
}

void cancelSeat(int seats[10][10], vector<int> &reservedRecord)
{

    int cancel;
    cout << "Enter Seat No to cancel reservation: \n";
    cin >> cancel;
    if (cancel > 100 || cancel < 1)
    {
        cout << "Invalid input!\n";
    }
    else
    {
        for (int vec : reservedRecord)
        {

            if (vec == cancel)
            {
                cout << "Seat reservation is canceled successfully!\n";
                reservedRecord.erase(
                    remove(reservedRecord.begin(), reservedRecord.end(), cancel),
                    reservedRecord.end());
                int row, column;
                row = (cancel - 1) / 10;
                column = (cancel - 1) % 10;
                seats[row][column] = 0;
                return;
            }
        }
        cout << "Seat No you entered is already free!" << endl;
    }
}

void count(int seats[10][10], vector<int> &reservedRecord, vector<int> &emptyRows)
{
    for (int i = 0; i < 10; i++)
    {
        int emptySeatCounter = 0;
        for (int j = 0; j < 10; j++)
        {
            if (seats[i][j] == 0)
            {
                emptySeatCounter++;
            }
        }
        if (emptySeatCounter == 10)
        {
            emptyRows.push_back(i + 1);
        }
    }
    cout << "Total Occupied seat are: " << reservedRecord.size() << endl;
    cout << "Total free seats are: " << (100 - reservedRecord.size()) << endl;
    cout << "Total empty rows are: " << emptyRows.size() << endl;
    for (int vec : emptyRows)
    {
        cout << "Empty row(s) is/are row no: " << vec << endl;
    }
    emptyRows.clear();
}