// CORSE 4 SOLUTION PROBLEM 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void ReadNumber(int& Num1, int& Num2)
{
    cout << " Please entre Number 1 " << endl;
    cin >> Num1;
    cout << " Please entre Number 2 " << endl;
    cin >> Num2;
}
void Swap(int& Num1, int& Num2)
{
    int Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}
void PrintNumbers(int Num1, int Num2)
{
    cout << " \n Number 1 = " << Num1 << endl;
    cout << " Number 2 = " << Num2 << endl;
}
int main()
{
    int Num1, Num2;
    ReadNumber(Num1, Num2);
    PrintNumbers(Num1, Num2);
    Swap(Num1, Num2);
    PrintNumbers(Num1, Num2);

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
