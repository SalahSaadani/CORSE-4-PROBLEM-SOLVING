// CORSE 4 SOLUTION PROBLEM 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadNum(int&Num1, int&Num2)
{
    
    cout << "Please enter Number1 " << endl;
    cin >> Num1;
    cout << " Please enter Number2 " << endl;
    cin >> Num2;
}
int MaxNumber(int Num1, int Num2)
{
    if (Num1 > Num2)
        return  Num1;
    else
        return Num2;
}
void PrintMaxNumber(int Max)
{
    cout << "\n The Maximum Number is :" << Max << endl;
}
int main()
{
    int Num1, Num2;
    ReadNum(Num1, Num2);
    PrintMaxNumber(MaxNumber(Num1, Num2));

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
