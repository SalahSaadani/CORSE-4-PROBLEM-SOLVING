// CORSE 4 SOLUTION PROBLEM 42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct strTaskDuration { int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds; };
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;

    TaskDuration.NumberOfDays = ReadPositiveNumber(" Please enter Number Of Days");
    TaskDuration.NumberOfHours = ReadPositiveNumber(" Please enter Number Of Hours ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber(" Please enter Number Of Minutes ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber(" Please enter Number Of Secondes");

    return TaskDuration;
}
int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}

int main()
{
    
    cout << "\n Task Duration In Seconds" << TaskDurationInSeconds(ReadTaskDuration());
    cout << endl;
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
