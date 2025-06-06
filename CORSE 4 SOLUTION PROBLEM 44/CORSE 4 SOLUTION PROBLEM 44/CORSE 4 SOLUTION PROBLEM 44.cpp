// CORSE 4 SOLUTION PROBLEM 44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To);

        return Number;
}

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek) ReadNumberInRange(" Please Enter Day Number Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 ? ",1,7);
}

string GetDayOfWeek(enDayOfWeek Day) 
{
    switch (Day) 
    {
    case enDayOfWeek::Sat:
        return " Saturday ";
    case enDayOfWeek::Sun:
        return "Sunday";
    case enDayOfWeek::Mon:
        return " Monday ";
    case enDayOfWeek::Tue:
        return " Tuesday ";
    case enDayOfWeek::Wed:
        return " Wednesday ";
    case enDayOfWeek::Thu:
        return "Thursday ";
    case enDayOfWeek::Fri:
        return " Friday ";
    default:
        return " Not a Valid Day ";
    }

}

int main()
{
    cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
