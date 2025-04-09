// CORSE 4 SOLUTION PROBLEM 18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

float ReadValue()
{
    float R;
    cout << " Please entre R " << endl;
    cin >> R;
    return R;
}
float CalculateCircleArea(float R)
{
     const float PI=3.14159265358979323846;
     float Area = PI * pow(R, 2);
     return Area;
}
void PrintCircleArea(float Area)
{
    cout << " The Circle Area = " << Area << endl;
}

int main()
{ 
    PrintCircleArea(CalculateCircleArea(ReadValue()));
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
