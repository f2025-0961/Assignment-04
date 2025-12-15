#include <iostream>
using namespace std;

void inputGrid(char charac[4][4]);
string traverseRow(char charac[4][4]);
string traverseColumn(char charac[4][4]);
void longesWord(string rowsWord, string colsWord);

int main()
{
    system("cls");
    char charac[4][4] = {0};
    inputGrid(charac);
    cout << endl;
    string rowLongestWord = traverseRow(charac);
    cout << endl;
    string colLongestWord = traverseColumn(charac);
    cout << endl;
    longesWord(rowLongestWord, colLongestWord);
    cout << endl;
    return 0;
}

void inputGrid(char charac[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Input characters of row: " << i + 1 << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << "Character No: " << j + 1 << endl;
            cin >> charac[i][j];
        }
    }
}

string traverseRow(char charac[4][4])
{
    int rowWordsCounter = 0;
    string rowlongestWord = "";
    for (int i = 0; i < 4; i++)
    {
        string row = "";
        int perRowWords = 0;
        for (int j = 0; j < 4; j++)
        {
            if (charac[i][j] == '.')
            {
                if (row.length() >= 3)
                {
                    rowWordsCounter++;
                    perRowWords++;
                    if (row.length() > rowlongestWord.length())
                    {
                        rowlongestWord = row;
                    }
                }

                row = "";
            }
            else
            {
                row = row + charac[i][j];
            }
        }
        if (row.length() >= 3)
        {
            if (row.length() > rowlongestWord.length())
            {
                rowlongestWord = row;
            }
            rowWordsCounter++;
            perRowWords++;
        }
        cout << "Word(s) greater>= character length 3 in row: " << i + 1 << " is/are: " << perRowWords << endl;
    }
    cout << "Total Word(s) greater>= character length 3 in all rows are: " << rowWordsCounter << endl;
    return rowlongestWord;
}

string traverseColumn(char charac[4][4])
{
    string collongestWord = "";
    int colWordsCounter = 0;
    for (int i = 0; i < 4; i++)
    {
        string col = "";

        int perColWords = 0;
        for (int j = 0; j < 4; j++)
        {
            if (charac[j][i] == '.')
            {
                if (col.length() >= 3)
                {
                    colWordsCounter++;
                    perColWords++;
                    if (col.length() > collongestWord.length())
                    {
                        collongestWord = col;
                    }
                }

                col = "";
            }
            else
            {
                col = col + charac[j][i];
            }
        }
        if (col.length() >= 3)
        {
            if (col.length() > collongestWord.length())
            {
                collongestWord = col;
            }
            colWordsCounter++;
            perColWords++;
        }
        cout << "Word(s) greater>= character length 3 in column: " << i + 1 << " is/are: " << perColWords << endl;
    }
    cout << "Total Word(s) greater>= character length 3 in all columns are: " << colWordsCounter << endl;
    return collongestWord;
}

void longesWord(string rowsWord, string colsWord)
{
    string longest, status;
    if (rowsWord.length() > colsWord.length())
    {
        longest = rowsWord;
        status = "row";
    }
    else
    {
        longest = colsWord;
        status = "column";
    }
    cout << "Longes word is in: " << status << " and is : " << longest << endl;
}
