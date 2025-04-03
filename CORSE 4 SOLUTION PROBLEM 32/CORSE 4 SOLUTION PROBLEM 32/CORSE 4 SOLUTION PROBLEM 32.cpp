// CORSE 4 SOLUTION PROBLEM 32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int ReadNum()
{
    int Num;
    cout << " Please enter the Number? " << endl;
    cin >> Num;

    return Num;
}
int ReadPower()
{
    int Power;
    cout << "Please enter the Power? " << endl;
    cin >> Power;

    return Power;
}
int PowerOfM(int Num, int Power)
{
    if (Power == 0)
    {
        // Any number powered to zero gives 1 
        return 1;
    }

    int P = 1;

    for (int i = 1 ; i<=Power ;i++)
    {
        P = P * Num; 
    }

    return P;
}
int main()
{
    cout << endl << " Result = " << PowerOfM(ReadNum(), ReadPower());
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
