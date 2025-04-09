// CORSE 4 SOLUTION PROBLEM 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void ReadAB(float& A, float& D)
{
    cout << " Please enter A " << endl;
    cin >> A;
    cout << " Please enter B " << endl;
    cin >> D;
}
float CalculArea(float A, float D)
{
    return A * sqrt(pow(D, 2 ) - pow(A,2));
}
void PrintArea(float Area)
{
    cout << " The Area = " << Area << endl;
}
int main()
{
    float A, D;
    ReadAB(A, D);
    PrintArea(CalculArea(A, D));
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
