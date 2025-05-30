// CORSE 4 SOLUTION PROBLEM 41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
float HoursToDays(float NumberOfHours)
{
    return (float)NumberOfHours / 24;
}
float HoursToWeeks(float NumberOfHours)
{
    return (float)NumberOfHours / 24 / 7;
}
float DaysToWeeks(float NumberofDays)
{
    return (float)NumberofDays / 7;
}

int main()
{
    float NumberOfHours = ReadPositiveNumber(" Please enter Number Of Hours ?");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << endl;
    cout << " Total Hours " << NumberOfHours << endl; 
    cout << " Total Days " << NumberOfDays << endl;
    cout << " Total Weeks " << NumberOfWeeks << endl;

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
