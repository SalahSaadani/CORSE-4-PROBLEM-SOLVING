// CORSE 4 SOLUTION PROBLEM 22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(float& A, float& B)
{
    cout << " Please entre Number A" << endl;
    cin >> A;
    cout << " Please entre Number B" << endl;
    cin >> B;
}
float CalculateCircleAreaInscribed(float A, float B)
{
    const float PI = 3.14159265358979323846;
    float Area = (PI * pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    return Area;
}
void PrintCircleArea(float Area)
{
    cout << " Circle Area Inscribed In a Isosceles Triangle = " << Area << endl;
}
int main()
{
    float A, B;
    ReadNumbers(A, B);
    PrintCircleArea(CalculateCircleAreaInscribed(A,B));
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
