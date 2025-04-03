// CORSE 4 SOLUTION PROBLEM 29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum enEvenOrOdd { Odd = 1, Even = 2 };
int ReadNumber()
{
    int Number;
    cout << " Please enter your Number? " << endl;
    cin >> Number;
    return Number;
}
enEvenOrOdd CheckNumber(int Number)
{
    if (Number % 2 != 0)
        return enEvenOrOdd::Odd;
    else
        return enEvenOrOdd::Even;

};
int SumEvenNumbers1ToN_UsinfForLoop(int N)
{
    int Sum = 0;
    cout << " Sum Even Number using For statement: \n ";

    for (int Counter = 0; Counter <= N; Counter++)
    {
        if (CheckNumber(Counter) == enEvenOrOdd::Even)
        {
            Sum += Counter;
        }

    }
    return Sum;
};
int SumEvenNumbers1ToN_UsinfWhileLoop(int N)
{
    int Sum = 0;
    int Counter = 0;
    cout << " Sum Even Number using While statement: \n ";

    while (Counter < N)
    {
        Counter++;
        if (CheckNumber(Counter) == enEvenOrOdd::Even)
        {
            Sum += Counter;
        }

    }

    return Sum;
}
int SumEvenNumbers1ToN_UsinfDoWhileLoop(int N)
{
    int Sum = 0;
    int Counter = 0;
    cout << " Sum Even Number using Do While statement: \n ";

    do
    {
        Counter++;
        if (CheckNumber(Counter) == enEvenOrOdd::Even)
        {
            Sum += Counter;
        }
    } while (Counter < N);

    return Sum;
}
int main()
{
    int N = ReadNumber();
    cout << SumEvenNumbers1ToN_UsinfForLoop(N) << endl;
    cout << SumEvenNumbers1ToN_UsinfWhileLoop(N) << endl;
    cout << SumEvenNumbers1ToN_UsinfDoWhileLoop(N) << endl;
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
