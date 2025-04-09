// COSRSE 4 SOLUTION OF PROBLEM N 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadMarks(int&Mark1, int&Mark2, int&Mark3)
{
    cout << " Please enter Mark1?\n";
    cin >> Mark1;

    cout << " Please enter Mark2?\n";
    cin >> Mark2;

    cout << " Please enter Mark3?\n";
    cin >> Mark3;
}
int SumofMarks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}
float AverageMarks(int Mark1, int Mark2, int Mark3)
{
    return (float) SumofMarks(Mark1 , Mark2 , Mark3) / 3;
} 
void PrintAverage(float Average)
{
    cout << " The Average of Marks is " << Average << endl;
}
int main()
{
    int Mark1, Mark2, Mark3;

    ReadMarks(Mark1, Mark2, Mark3);

    PrintAverage(AverageMarks(Mark1, Mark2, Mark3));

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
