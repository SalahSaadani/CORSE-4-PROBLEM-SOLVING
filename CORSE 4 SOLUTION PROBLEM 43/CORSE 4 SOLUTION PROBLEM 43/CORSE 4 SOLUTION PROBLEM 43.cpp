// CORSE 4 SOLUTION PROBLEM 43.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct strTaskDuration { int NumOfDays, NumOfHours, NumOfMinutes, NumOfSeconds; };

int ReadPositiveNumber(string Message)
{
    int Number; 
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

strTaskDuration SecondOfTaskDuration(int TotalSecond)
{
    strTaskDuration TaskDuration;
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondPerHour = 60 * 60;
    const int SecondPerMinute = 60;

    int Remainder = 0;
    TaskDuration.NumOfDays = floor(TotalSecond / SecondsPerDay);
    Remainder = TotalSecond % SecondsPerDay;
    TaskDuration.NumOfHours = floor(Remainder / SecondPerHour);
    Remainder = Remainder % SecondPerHour;
    TaskDuration.NumOfMinutes = floor(Remainder / SecondPerMinute);
    Remainder = Remainder % SecondPerMinute;
    TaskDuration.NumOfSeconds = Remainder;

    return TaskDuration;

}
void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
    cout << "\n";
    cout << TaskDuration.NumOfDays << ":" << TaskDuration.NumOfHours << ":" << TaskDuration.NumOfMinutes << ":" << TaskDuration.NumOfSeconds << "\n";

}
int main()
{
    int TotalSecond = ReadPositiveNumber(" Please enter Total Second ? ");
    PrintTaskDurationDetails(SecondOfTaskDuration(TotalSecond));
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
