// CORSE 4 SOLUTION PROBLEM 34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

float ReadTotalSale()
{
    float Totalsales;
    cout << " Please enter a Total Sales " << endl;
    cin >> Totalsales;

    return Totalsales;
}
float GetComissionPercentage(float Totalsales)
{
    if (Totalsales >= 1000000)
        return 0.01;
    else if (Totalsales >= 500000)
        return 0.02;
    else if (Totalsales >= 100000)
        return 0.03;
    else if (Totalsales >= 50000)
        return 0.05;
    else
        return 0.00;

}
float CalculateTotalComission(float Totalsales)
{
    return GetComissionPercentage(Totalsales) * Totalsales;
}
int main()
{
    float Totalsales = ReadTotalSale();

    cout << endl << " Comission Percentage  =" << GetComissionPercentage(Totalsales) << endl;
    cout << endl << " Total Comission = " << CalculateTotalComission(Totalsales) << endl;
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
