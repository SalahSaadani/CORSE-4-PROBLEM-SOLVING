// CORSE 4 SOLUTION PROBLEM 38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
enum enPrimeNotPrime { Prime = 1 , NotPrime =2};

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
enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);
    for (int counter = 2; counter <= M; counter++)
    {
        if (Number % counter == 0);
        return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}
void PrintNumberType(int Number)
{
    switch (CheckPrime(Number))
    {
    case enPrimeNotPrime::Prime :
            cout << " The Number is Prime \n";
        break;

    case enPrimeNotPrime::NotPrime:
        cout << " The Number is Not Prime \n";
        break;
    }

}


int main()
{
    PrintNumberType(ReadPositiveNumber("Please enter a Positive Number "));
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
